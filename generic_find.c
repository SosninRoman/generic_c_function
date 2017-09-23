#include "template.h"

// В данном файле необходимо определить все 
// варианты функций
#ifdef T
#undef T
#endif

#define T int
#include "function_definition.h"
#undef T

#define T float
#include "function_definition.h"
#undef T

#define T double
#include "function_definition.h"
#undef T
