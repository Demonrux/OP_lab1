#ifndef APPCONTEXT_H
#define APPCONTEXT_H

#include <stdlib.h>
#define LEN 33
#define DEFAULT_BASE 10
#define DEFAULT_VALUE 0
#define ONLINE 1
#define OFLINE 0
#define DEFAULT_STR "\0"

struct AppContext{
    long value = DEFAULT_VALUE;
    short inputStatus = ONLINE;
    short addStatus = OFLINE;
    unsigned currentBase = DEFAULT_BASE;
    unsigned toBase = DEFAULT_BASE;
    char result[LEN] = DEFAULT_STR;
    char inputStr[LEN] = DEFAULT_STR;
    char saveInBufStr[LEN] = DEFAULT_STR;
};

#endif // APPCONTEXT_H//

