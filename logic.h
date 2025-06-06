#ifndef LOGIC_H
#define LOGIC_H

#include "appcontext.h"
#include <stdlib.h>
#include <windows.h>

#define DEFAULT_VALUE 0
#define TERMINAL_NULL '\0'
#define CORRECT_INPUT 1
#define INCORRECT_INPUT 0
#define LEN 33
#define TWO 2
#define UNSIGNED_MAX 4294967295
#define BIN 2
#define OCT 8
#define DEC 10
#define HEX 16
#define LEN_HEX 8
#define LEN_OCT 11

void doConvert(AppContext* context);
void doSave(AppContext* context);
void doInitialize(AppContext* context);
void doValidation(AppContext* context);
void doSwap(AppContext* context);
void doConvertAddCode(AppContext* context);
void doChekingAddCode(AppContext* context);

#endif // LOGIC_H
