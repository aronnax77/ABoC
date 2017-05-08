/* exercise05.c - The following program may have a run-time error in it:

#include <stdio.h>

int main(void)
{
	int		x, y = 0;

	x = 1 / y;
	printf("x = %d\n", x);

	return (0);
}

Check to see that the program compiles without any error messages.  Run the
program to see the effect of integer division by zero.  On most systems 
this program will exhibit a run-time error.  If this happens on your 
system, try to rewrite the program without the variable y, but keep the 
error in the program.  That is, divide by zero directly.  Now what happens?
*/

#include <stdio.h>

int main(void)
{
	int		x = 0;

	x = 1 / 0;
	printf("x = %d\n", x);

	return (0);
}

/*  In both cases I got a run-time exception of 'Floating point exception
    (core dumped).'  However, in the second case I also got a compile 
    warning advising me that I was trying to divide by zero.  */
