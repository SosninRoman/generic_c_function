#ifdef T
#include "template.h"

int FIND(T) (T* base, int size, T val, int t)
{
	for(int i = 0; i < size; ++i)
		if( *(base + i) == val)
			return i;
	return -1;
}

#endif
//#endif