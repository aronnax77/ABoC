/* exercise04.c - Take one of your working programs and alter it by deleting  
    the keyword void in the line

	int main(void)

   When you complile your programe, does your compiler complain?  Probably
   not.  (See Section 5.3, "Function Prototypes," on page 202, for further
   discussion.)  Next remove the keyword void and remove the following line    from the body of main().

	return 0;

   When you compile the programe, does your compiler complain?  This time 
   it should.  If your compiler does not complain, learn how to set a 
   higher warning level for your compiler.  Generally speaking, 
   programmers should always use the highest warning level possible.  One
   of the principle rules of programming is keep your compiler happy, but 
   not at the expense of turning off all the warnings.  Programmers should
   rework their code repeatedly until all the warnings have vanished. */


#include <stdio.h>

int main()
{
	double		miles, yards;
	double		kilometers;

	miles = 26.0;
	yards = 385.0;
	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %f kilometers.\n\n", kilometers);

}

/* Notes:  Followed the above instructions.  In both cases no warnings 
   were given by the compiler.  I then read about how to increase the
   warning level.  Used -Wall which I have seen before but still no
   errors.  Also tried -Wmain but still no errors reported.  Not sure 
   what to think of this.  */
