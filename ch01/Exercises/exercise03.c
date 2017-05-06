/* exercise03.c - Write a version of the marathon program in Section 1.3,
   Variables, Expressions, and Assignment," on page 11, in which all 
   constants and variables are of type double.  Is the output of the 
   program exactly the same as that of the original? */

#include <stdio.h>

int main(void)
{
	double		miles, yards;
	double		kilometers;

	miles = 26.0;
	yards = 385.0;
	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %f kilometers.\n\n", kilometers);

	return 0;
}
