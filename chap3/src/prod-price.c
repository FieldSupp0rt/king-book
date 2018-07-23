//Exercise for formatting text columns.

#include <stdio.h>

int main (void) {

	int num, day, month, year;
	float amount;

	printf("Enter item number: ");
	scanf("%d", &num);
	printf("Enter unit price: ");
	scanf("%f", &amount);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%d\t\t$ %6.2f\t\t%d/%d/%d\n", num, amount, month, day, year);

	return 0;
}