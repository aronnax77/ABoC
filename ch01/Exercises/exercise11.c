/* exercise11.c - Write a program that asks interactively for your name and
age and responds with

	Hello name, next year you will be next_age.

where next_age is age + 1. */

#include <stdio.h>

int main(void)
{
	char* 		name;
	int			age, next_age;

	printf("Please enter your name and your age in years:  ");
	scanf("%s%d", name, &age);

	next_age = age + 1;

	printf("\n\n\n\nHello %s, next year you will be %d years old.\n\n\n\n", 
		name, next_age);

	return (0);
}
