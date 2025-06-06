#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

#include "appcontext.h"

enum Operation {
    Convert,
    Save,
    Initialization,
    Validation,
    Swap,
    ConvertAddCode,
    ChekingAddCode
};

void doOperation(Operation operation, AppContext* context);

#endif // ENTRYPOINT_H
