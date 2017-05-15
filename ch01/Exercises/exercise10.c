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
