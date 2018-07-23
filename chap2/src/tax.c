//Calculate tax on an amount.

#include <stdio.h>

#define TAX_RATE 5

int main (void) {

	float amount;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	printf("With tax added: %.2f\n", (amount + ((amount / 100) * TAX_RATE)));

	return 0;
}
 
