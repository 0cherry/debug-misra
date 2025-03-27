#include "bad_case.h"

int test1603(int x)
{
	switch(x)
	{
	case 1:
	case 2:
		x++;
		break;
	case 3:	
		x--;
        break; /* Added break for compliance */
	default:
        break; /* Changed from ';' to 'break;' for compliance */
	}

	return x;
}

short test0902(int x, int y, short e){
    short buf[3][2] = { { 1, 2 }, { 0, 0 }, { 5, 6 } }; // Compliant
   buf[x][y] = e;
   return buf[x][y];
}
