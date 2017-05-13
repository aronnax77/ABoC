/* exercise09.c - The following program writes a large letter I on the screen:
#include <stdio.h> 

#define BOTTOM_SPACE	"\n\n\n\n\n"
#define HEIGHT			17
#define OFFSET			"                 "	// 17 blanks
#define TOP_SPACE		"\n\n\n\n\n"

int main(void)
{
	int i;

	printf(TOP_SPACE); 
	printf(OFFSET "IIIIIII\n");
	for(i = 0; i < HEIGHT; ++i)
		printf(OFFSET "  III\n");
	printf(OFFSET "IIIIIII\n");
	printf(BOTTOM_SPACE);

	return (0);
}

Compile and run this program so that you understand its effect.  Write a 
similar program that prints a large letter C on the screen. */

#include <stdio.h> 

#define BOTTOM_SPACE	"\n\n\n\n\n"
#define HEIGHT			17
#define OFFSET			"                 "	// 17 blanks
#define TOP_SPACE		"\n\n\n\n\n"

#define MARGIN			"               "	// 15 blanks
#define HEIGHT_C		6 

int main(void)
{
	int i;

	printf(TOP_SPACE);
	printf("a) A large letter I");

	printf(TOP_SPACE);
	printf("a) A large letter I");

	printf(TOP_SPACE); 
	printf(OFFSET "IIIIIII\n");
	for(i = 0; i < HEIGHT; ++i)
		printf(OFFSET "  III\n");
	printf(OFFSET "IIIIIII\n");
	printf(BOTTOM_SPACE);

	printf("b) A large letter C");
	printf(TOP_SPACE);

	printf(MARGIN "   CCCC\n");
	printf(MARGIN " CCCCCCCC\n");
	printf(MARGIN " CC    CCC\n");
	printf(MARGIN "CC       C\n");
	for(i = 0; i < HEIGHT_C; ++i)
		printf(MARGIN "CC\n");	
	printf(MARGIN "CC       C\n");
	printf(MARGIN " CC    CCC\n");
	printf(MARGIN " CCCCCCCC\n");
	printf(MARGIN "   CCCC\n");

	return (0);
}
