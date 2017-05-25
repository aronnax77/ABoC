/* exercise12.c - Write a program that neatly prints a table of powers.
The first few lines of the table might look like this:

See example from the book

*/

#include <stdio.h>
#include <math.h>

#define TABLE_HEADING		"       :::::  A TABLE OF POWERS  ::::"	

int main(void)
{

	int		i;
	double	pow2, pow3, pow4, pow5;

	// print table heading
	printf("\n\n\n\n\n%s\n\n", TABLE_HEADING);

	// print column headings
	printf("%10s%15s%15s%15s%15s\n", "Integer", "Square", "3rd Power",
			"4th Power", "5th Power");
	printf("%10s%15s%15s%15s%15s\n", "-------", "------", "---------",
			"---------", "---------");

	// print table
	for(i = 1; i <= 3; i++) {
		pow2 = pow((double) i, (double) 2);
		pow3 = pow((double) i, (double) 3);
		pow4 = pow((double) i, (double) 4);
		pow5 = pow((double) i, (double) 5);
		printf("%10d%15.0f%15.0f%15.0f%15.0f\n", i,  pow2, pow3,
			pow4, pow5);
	}

	// end
	printf("\n\n\n\n\n");

	return (0);
}


/* Note:  Using pow() seemed to result in an error which stumped
me until I consulted Mr Google.  I was using make exercise12 and
kept getting the error

exercise12.c:(.text+0x8e): undefined reference to `pow'

It appears that one must use

gcc exercise12.c -lm -o exercise12

Typing in man pow would quickly have told me this although I am 
not sure I would have understood it without consulting Mr Google.
*/
