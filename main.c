#include "stdio.h"
#include "conio.h"
#include "generic_find.h"

int main()
{
	int ar[] = { 5, 4, 3, 2, 1 };

	int pos = FIND(int)(ar, 5, 4);
	
	int pos2 = FIND(int)(ar, 5, 0);

	return 0;
}