/* exercise01.c - on a screen write the words
		she sells sea shells by the seashore
(a) all on one line, (b) on three lines, (c) inside a box */

#include <stdio.h>

int main(void)
{
	printf("(a)\n");
	printf("she sells sea shells on the sea shore\n\n\n");
	printf("(b)\n");
	printf("%s\n%s\n%s\n\n\n",
		   "she sells",
			"sea shells",
			"by the sea shore");
	printf("(c)\n");
	printf("%s\n%s\n%s\n\n\n",
			"#############################################",
			"#   she sells sea shells by the sea shore   #",
			"#############################################");

	return (0);
}

