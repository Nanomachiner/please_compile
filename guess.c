#include <stdio.h>

/* This program adds a number of US-based denominations of coins, and allows the
user to guess the total value, given a certain number of each coin. The total
is displayed afterward for convenience.*/

int q;
int d;
int n;
int p;
float guess;

int main(void)
{
/* Each of the following four segments of code prompt the user for a number
of each type of coin, while also calculating the total value of each*/
	
	printf("Enter number of quarters:\n");
	scanf ("%d", &q);
	float qt = q * 0.25;


	printf("Enter number of nickels:\n");
	scanf ("%d", &n);
	float nt = n * 0.05;


	printf("Enter number of dimes:\n");
	scanf ("%d", &d);
	float dt = d * 0.10;

	printf("Enter number of pennies:\n");
	scanf ("%d", &p);
	float pt = p * 0.01;

/*The total amount of money is determined by adding the total of each
denomination from the previous four segments.*/

	float total = qt + nt + dt + pt;

/* Here, the user makes their guess for the total value of all denominations
added together*/

	printf("Guess the total value!\n");
	scanf ("%f", &guess);

/* Here, each case is presented. If the answer is correct, a message is 
displayed, and the program exits. If the user is within 5 cents of the correct
total, a message displays that the answer is "close", and the program exits.
Outside of these two cases, a message is displayed that the answer is incorrect,
and the correct total is displayed.*/

	if (guess == total)
	{
		printf("Total: %f\n", total);
		printf("Correct!\n");
		return 0;
	}
	else if (guess - total <= 0.05 && guess - total >= -0.05)
	{
		printf("The total was %f\n", total);
		printf("You were close!\n");
		return 0;
	}
	else
	{
		printf("Your answer is incorrect...The correct answer was %f\n", total);
		return 0;
	}
} //End of program