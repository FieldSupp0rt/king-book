//Calculate tax due based on income.

#include <stdio.h>

float getTax(int income, float setAmt, float rate);

int main(void) {

	int income = 0;
	float tax = 0.0;

	printf("Enter your income: ");
	scanf("%d", &income);
	if (income < 750) tax = getTax(income, 0, 1.0);
	else if (income < 2250) tax = getTax(income - 750, 7.5, 2.0);
	else if (income < 3750) tax = getTax(income - 2250, 37.5 ,3.0);
	else if (income < 5250) tax = getTax(income - 3750, 82.5, 4.0);
	else if (income < 7000) tax = getTax(income - 5250, 142.5, 5.0);
	else tax = getTax(income - 7000, 230.0, 6.0);

	printf ("The tax owed is: %.2f\n", tax);
	return 0;
}

float getTax(int income, float setAmt, float rate) {

	float tax = ((float) income / 100.0) * rate;
	tax = tax + setAmt;

	return tax;
}
