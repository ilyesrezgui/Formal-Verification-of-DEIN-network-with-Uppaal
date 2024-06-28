#ifndef LIBRARY_EXTERNAL_H
#define LIBRARY_EXTERNAL_H

#ifdef __cplusplus
extern "C" { // tells C++ compiler to use C symbol name mangling (C compiler ignores)
#endif // __cplusplus

// Computes a square root and truncates to an integer
int castToInt(double value);

#ifdef __cplusplus
} // end of "C" symbol name mangling
#endif // __cplusplus

#endif // LIBRARY_EXTERNAL_H
