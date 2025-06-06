#include "entrypoint.h"
#include "logic.h"

void doOperation(Operation operation, AppContext *context)
{
    switch(operation) {
    case Convert:
        doConvert(context);
        break;
    case Save:
        doSave(context);
        break;
    case Initialization:
        doInitialize(context);
        break;
    case Validation:
        doValidation(context);
        break;
    case Swap:
        doSwap(context);
        break;
    case ConvertAddCode:
        doConvertAddCode(context);
        break;
    case ChekingAddCode:
        doChekingAddCode(context);
        break;
    }
}

