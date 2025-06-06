#include "logic.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char ALPHABET[] = "0123456789abcdefghijklmnopqrstuvwxyz";

void doConvert(AppContext* context) {
    context->value = strtol(context->inputStr, NULL, context->currentBase);
    int value = context->value;
    if(context->currentBase == context->toBase) {
        strcpy_s(context->result, context->inputStr);
        int i = DEFAULT_VALUE, j = DEFAULT_VALUE;
        if(context->inputStr[0] == '-' || context->inputStr[0] == '+') {
            i++;
            if(context->inputStr[0] == '-') {
                j++;
                context->result[0] = '-';
            }
        }
        while (context->result[i] == '0') {
            i++;
        }
        while (context->result[i] != TERMINAL_NULL) {
            context->result[j++] = context->result[i++];
        }
        context->result[j] = TERMINAL_NULL;
    }

    else if(value == DEFAULT_VALUE && context->inputStr[0] != TERMINAL_NULL) {
        context->result[0] = '0';
        context->result[1] = TERMINAL_NULL;
    }

    else if(context->inputStr[0] == TERMINAL_NULL) {
        context->result[0] = TERMINAL_NULL;
    }

    else {
        if(context->inputStr[0] == '-')
            value = (unsigned) value;
        while(value) {
            char currNumb[TWO] = DEFAULT_STR;
            currNumb[0] = ALPHABET[value % context->toBase];
            strcat_s(context->result, currNumb);
            value /= context->toBase;
        }
        strrev(context->result);
    }
    strcpy_s(context->saveInBufStr, context->result);
}

void doConvertAddCode(AppContext* context) {
    char copyInputStr[LEN] = DEFAULT_STR;
    strcat_s(copyInputStr, context->inputStr);
    size_t len = DEFAULT_VALUE;
    for(size_t i = DEFAULT_VALUE; context->inputStr[i];i++) {
        if(context->inputStr[i] != TERMINAL_NULL)
            len++;
    }
    if(copyInputStr[0] != TERMINAL_NULL) {
        if((len == (LEN - 1) && context->currentBase == BIN && context->inputStr[0] == '1') || (len == LEN_OCT && (context->currentBase == OCT)) || (len == LEN_HEX && context->currentBase == HEX)) {
            long long value = strtoll(copyInputStr, NULL, context->currentBase);
            if(context->toBase != DEC) {
                value = (unsigned long long) value;
                char newStr[LEN] = DEFAULT_STR;
                while(value) {
                    char currNumb[TWO] = DEFAULT_STR;
                    currNumb[0] = ALPHABET[value % context->toBase];
                    strcat_s(newStr, currNumb);
                    value /= context->toBase;
                }
                strrev(newStr);
                strcat_s(context->result, newStr);
            }
            else {
                value = (value - UNSIGNED_MAX - 1);
                char newStr[LEN] = DEFAULT_STR;
                snprintf(newStr, sizeof(newStr), "%lld", value);
                strcat_s(context->result, newStr);
            }
        }
    }
    strcpy_s(context->saveInBufStr, context->result);
}

void doValidation(AppContext* context) {
    long long longLongValue = strtoll(context->inputStr, NULL, context->currentBase);
    unsigned start = DEFAULT_VALUE;
    if((context->inputStr[0] == '-' || context->inputStr[0] == '+') && context->currentBase == DEC)
        start++;
    for(size_t i = start;context->inputStr[i];i++) {
        short currentSymbolCheking = OFLINE;
        for(size_t j = DEFAULT_VALUE; j < context->currentBase; j++) {
            if(context->inputStr[i] == ALPHABET[j]) {
                currentSymbolCheking = ONLINE;
            }
        }
        if(!currentSymbolCheking) {
            context->inputStatus = OFLINE;
            break;
        }
    }
    if((longLongValue > LONG_MAX || longLongValue < LONG_MIN) && context->addStatus != ONLINE)
        context->inputStatus = OFLINE;
}


void doSwap(AppContext* context) {
    char temp1[LEN] = DEFAULT_STR;
    char temp2[LEN] = DEFAULT_STR;
    strcat_s(temp1, context->inputStr);
    strcat_s(temp2, context->result);
    context->result[0] = TERMINAL_NULL;
    context->inputStr[0] = TERMINAL_NULL;
    strcat_s(context->result, temp1);
    strcat_s(context->inputStr, temp2);
}

void doSave(AppContext* context) {
    size_t len = DEFAULT_VALUE;
    for(int i = DEFAULT_VALUE;context->saveInBufStr[i];i++)
        if(context->saveInBufStr[i])
            len++;
    HANDLE hmem = GlobalAlloc(GMEM_MOVEABLE, len);
    char *pmem = (char*) GlobalLock(hmem);
    strcpy_s(pmem, len, context->saveInBufStr);
    GlobalUnlock(hmem);
    if (OpenClipboard(NULL)) {
        EmptyClipboard();
        if (SetClipboardData(CF_TEXT, hmem))
            hmem = NULL;
        CloseClipboard();
    }
    GlobalFree(hmem);
}

void doInitialize(AppContext* context) {
    context->inputStatus = ONLINE;
    context->addStatus = OFLINE;
    context->result[0] = TERMINAL_NULL;
    context->inputStr[0] = TERMINAL_NULL;
    context->saveInBufStr[0] = TERMINAL_NULL;
}

void doChekingAddCode(AppContext* context) {
    size_t len = DEFAULT_VALUE;
    for(size_t i = DEFAULT_VALUE; context->inputStr[i];i++) {
        if(context->inputStr[i] != TERMINAL_NULL)
            len++;
    }
    if((len == LEN - 1 && context->currentBase == BIN && context->inputStr[0] == '1') ||(len == LEN_HEX && context->currentBase == HEX && context->inputStr[0] == 'f') || (len == LEN_OCT && context->currentBase == OCT && context->inputStr[0] == '3'))
        context->addStatus = ONLINE;
}
