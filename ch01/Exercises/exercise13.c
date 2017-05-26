/* exercise13.c - A for loop has the form

for (expr1; expr2; expr3)
	statement

If all three expressions are present, then this is equivalent to

expr1;
while (expr2) {
	statement
	expr3;
}

Why is there no semicolon following statement?  Of course it may well 
happen that statement itself contains a semicolon at the end, but it does
not have to.  In C, a compound statement consists of braces surrounding
zero or more other statements, and a compound statement is itself a 
statement.  Thus, both { } and { ; ; ; } are statements.  Try the following
code:

int		i;

for (i = 0; i < 3; ++i)
	{ }						// no semicolon
for (i = 0; i < 3; ++i)
	{ ; ; ; }				// three semicolons but non after the statement

Is your compiler happy with this? (It should be.)  Compilers care about 
legality.  If what you write is legal but otherwise nonesense, your
compiler will be happy. */


int main(void)
{
	int		i;

	for (i = 0; i < 3; ++i)
		{ }						// no semicolon
	for (i = 0; i < 3; ++i)
		{ ; ; ; }				// three semicolons but non after the statement

	return (0);
}

/* The above code compiles with no errors and runs but without any results
*/
