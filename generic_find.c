#include "template.h"

// � ������ ����� ���������� ���������� ��� 
// �������� �������
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