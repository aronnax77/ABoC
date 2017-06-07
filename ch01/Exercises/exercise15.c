/* exercise15.c - (Suggested to us by Donald Knuth at Stanford University.)
In the running_sum program in Section 1.6, "Flow of Control," on page 26, 
we first computed a sum and then divided by the number of summands to 
compute an average.  The following program illustrates a better way to 
compute the average:

// Compute a better average. 

#include <stdio.h>

int main(void)
{
	int		i;
	double	x;
	double	avg = 0.0;		// a better average
	double	navg;			// a naive average
	double	sum = 0.0;

	printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n",
		"Count", "Item", "Average", "Naive avg",
		"-----", "----", "-------", "---------");

	for (i = 1; scanf("%lf", &x) == 1; ++i) {
		avg += (x -avg) / i;
		sum += x;
		navg = sum / i;
		printf("%5d%17e%17e%17e\n", i, x, avg, navg);
	}

	return (0);
}

Run this program so that you understand its effects.  Note that he better
algorithm for computing the average is embodied in the line

	avg += (x - avg) / i;

Explain why this algorithm does, in fact, compute the running average. 
Hint: Do some simple hand calculations first. */

// Compute a better average. 

#include <stdio.h>

int main(void)
{
	int		i;
	double	x;
	double	avg = 0.0;		// a better average
	double	navg;			// a naive average
	double	sum = 0.0;

	printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n",
		"Count", "Item", "Average", "Naive avg",
		"-----", "----", "-------", "---------");

	for (i = 1; scanf("%lf", &x) == 1; ++i) {
		avg += (x -avg) / i;
		sum += x;
		navg = sum / i;
		printf("%5d%17e%17e%17e\n", i, x, avg, navg);
	}

	return (0);
}

/* While I can see that the algorithm works I cannot say that I find it 
intuitive. */
