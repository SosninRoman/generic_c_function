#include <stdio.h>
#include "generic_find.h"

int main(int argc, char* argv[])
{
	int ar[5];
	ar[0] = 7;
	ar[1] = 13;
	ar[2] = 9;
	ar[3] = 2;
	ar[4] = 0;

	//int pos = FIND(int)(4,ar,5);
	int pos = FIND(int)(ar, 5, 4);
	int pos2 = FIND(int)(ar, 5, 0);
    return 0;
}
