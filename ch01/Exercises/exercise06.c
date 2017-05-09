/* exercise06.c - Most C systems provide for logically infinite floating
values.  Modify the program given in the previous by changing int to double
and, in the printf() statement, %d to %f.  Does the program still exhibit
a run-time error?  On most systems the answer is no.  What happens on your
system */

#include <stdio.h>

int main(void)
{
	double	x, y = 0;

	x = 1 / y;
	printf("x = %f\n", x);

	return (0);
}

/* Facinating.  The system gave the answer of x = inf and did not produce
any errors or warnings during compilation. */
