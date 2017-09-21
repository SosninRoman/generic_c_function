#ifndef GENERIC_FIND_PURE_C
#define GENERIC_FIND_PURE_C

#include "template.h"

// В данном файле необходимо объявить все 
// варианты функций
#ifdef T
#undef T
#endif

#define T int
#include "function_declaration.h"
#undef T

#define T float
#include "function_declaration.h"
#undef T

#define T double
#include "function_declaration.h"
#undef T

#endif