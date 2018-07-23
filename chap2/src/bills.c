//Calculate number of dollar bills required for amount using highest denomination bills.

#include <stdio.h>

#define TWENTY 20
#define TEN 10
#define FIVE 5

int main (void) {

	int amount, twenties, tens, fives, ones;
	amount = twenties = tens = fives = ones = 0;	//initialise all values to 0

	printf("Enter amount of dollars: ");
	scanf("%d", &amount);

	twenties = amount / TWENTY;
	tens = (amount - twenties *TWENTY) / TEN;
	fives = (amount - (twenties * TWENTY) - (tens * TEN)) / FIVE;
	ones = amount - (twenties * TWENTY) - (tens * TEN) - fives * FIVE;

	printf ("$20: %d\n$10: %d\n $5: %d\n $1: %d\n", twenties, tens, fives, ones);

	return 0;
}
