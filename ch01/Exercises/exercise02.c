/* exercise02.c - Use a hand calculator to verify that the output of the
   marathon program is correct.  Create another version of the program by 
   changing the floating constant 1760.0 to an integer constant 1760.  
   Compile and execute the program and notice that the output is not the 
   same as before.  This is because integer division discards any fractional   part. */

#include <stdio.h>

int main(void)
{
	int		miles, yards;
	float	kilometers;

	miles = 26;
	yards = 385;
	kilometers = 1.609 * (miles + yards / 1760);
	printf("\nA marathon is %f kilometers.\n\n", kilometers);

	return 0;
}

