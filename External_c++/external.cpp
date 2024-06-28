#include "external.h"
#include <cmath>
#include <iostream>

#ifdef __cplusplus
extern "C" { // tells C++ compiler to use C symbol name mangling (C compiler ignores)
#endif // __cplusplus

int castToInt(double value) {
    return static_cast<int>(value);
}

#ifdef __cplusplus
} // end of "C" symbol name mangling
#endif // __cplusplus
