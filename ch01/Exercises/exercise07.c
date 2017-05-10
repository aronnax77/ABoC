/* exercise07.c - Any #include lines in a program normally occur at the top
of the file.  But do they have to be at the top?  Rewrite the pacific_sea
program in Section 1.4, "The Use of #define and #include," on page 15, so
that the #include is not at the top of the file.  For example, try

int main(void)
{
	#include "pacific_sea.h"
	....
*/

int main(void)
{
	#include "pacific_sea.h"

	const int	pacific_sea = AREA;			/* in sq kilometers */
	double		acres, sq_miles, sq_feet, sq_inches;

	printf("\nThe Pacific Sea covers an area");
	printf(" of %d square kilometers.\n", pacific_sea);

	sq_miles  = SQ_MILES_PER_SQ_KILOMETER * pacific_sea;
	sq_feet   = SQ_FEET_PER_SQ_MILE * sq_miles;
	sq_inches = SQ_INCHES_PER_SQ_FOOT * sq_feet;
	acres     = ACRES_PER_SQ_MILE * sq_miles;

	printf("In other units of measure this is:\n\n");
	printf("%22.7e acres\n", acres);
	printf("%22.7e square miles\n", sq_miles);
	printf("%22.7e square feet\n", sq_feet);
	printf("%22.7e square inches\n\n", sq_inches);

	return 0;
}

/* It seems it does not matter if the #include line is moved to the top
of main. */
