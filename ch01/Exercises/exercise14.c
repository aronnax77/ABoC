/* The standard header files supplied by the C system can be found in one or
more system dependent directories.  For example, on UNIX systems these
header files might be in /usr/include.  On Turbo C systems they might be
in \turboc\include or \tc\include or \bc\include.  Find the location of the
standard header file stdio.h on your system.  Read this file and find the 
line that pertains to printf().  The line will look something like

	int printf(const char *format, ...);

This line is an example of a function prototype.  Function prototypes tell
the compiler the number and type of arguments that are expected to be 
passed to the function and the type of the value that is returned by the
function.  As we will see in later chapters, strings are a type "pointer to
char," which is specified by char *.  The identifier format is provided 
only for its mnemonic value to the programmer.  The compiler disregards it.
The function prototype for printf() could just as well have been written

	int printf(const char *, ...);

The keyword const tells the compiler that the string that gets passed as an
argument should not be changed.  The elipses ... indicate to the compiler 
that the number and type of the remaining arguments vary.  The printf() 
function returns as an int the number of characteers transmitted, or a 
negative value if an error occurs.  Recall that the first program in this 
chapter in Section 1.2, "Program Output," on page 6, prints the phrase 
"from sea to shining C" on the screen.  Rewrite the program by replacing 
the #include line with the function prototype for printf() given above.
Caution:  You can try to use verbatim the line that you found in stdio.h,
but your program may fail.  (See Chapter8, "The Preprocessor.") */


// file: sea2.c
// page 10

// #include <stdio.h>

// int printf(const char *format, ...);

extern int printf(const char *__restrict __format, ...);

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

/* As suggested in the exercise I used the printf() prototype verbatim from
the exercise and followed this with a direct copy from stdio.h.  Both 
versions compiled without a problem and produced the same result although I
cannot say I fully understand the version from stdio.h. */
