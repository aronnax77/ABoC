/* exercise10.c - Take a working program and omit each line in turn and run
it throught the compiler.  Record the error messages each deletion causes.
As an example, consider the following code in the file nonesense.c.

#include <stdio.h>
// forgot main
{
	printf("nonesense");
}

*/

/*  The following error message was generated trying to compile nonesense.c

tyrion$~: make nonesense
cc     nonesense.c   -o nonesense
nonesense.c:5:1: error: expected identifier or ‘(’ before ‘{’ token
 {
 ^
<builtin>: recipe for target 'nonesense' failed
make: *** [nonesense] Error 1
tyrion$~: 

*/

/* Using the sea2.c programe with the following code:

// file: sea2.c
// page 10

// #include <stdio.h>

int main(void)
{
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("            *****************************\n");
	printf("            *    from sea               *\n");
	printf("            *    to shining C           *\n");
	printf("            *****************************\n");
	printf("\n\n\n\n\n\n\n\n\n\n");

	return 0;
}

taking our the #include statement as illustrated gave the following error:

tyrion$~: make sea2
cc     sea2.c   -o sea2
sea2.c: In function ‘main’:
sea2.c:8:2: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
  printf("\n\n\n\n\n\n\n\n\n\n");
  ^
sea2.c:8:2: warning: incompatible implicit declaration of built-in function ‘printf’
sea2.c:8:2: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
tyrion$~:

taking our the return statement and reinstating the #include does not raise an error or warning.

taking out one of the block brackets and reinstating all else produced the following error

tyrion$~: make sea2
cc     sea2.c   -o sea2
sea2.c: In function ‘main’:
sea2.c:15:2: error: expected declaration or statement at end of input
  return 0;
  ^
<builtin>: recipe for target 'sea2' failed
make: *** [sea2] Error 1
tyrion$~:

*/
