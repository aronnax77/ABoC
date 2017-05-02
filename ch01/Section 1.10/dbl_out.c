/* dbl_out.c - a demonstration of the ways in which a program can *
 * be run from the command line.                                  */

#include <stdio.h>

int main(void)
{
	char	c;

	while(scanf("%c", &c) == 1) {
		printf("%c", c);
		printf("%c", c);
	}

	return(0);
}
		
