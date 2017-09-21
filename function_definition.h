#ifdef T
#include "template.h"

int FIND(T) (T* base, int size, T val)
{
	int i = 0;
	while(i < size)
	{
		if( *(base + i) == val)
			return i;
		++i;
	}
	return -1;
}

#endif