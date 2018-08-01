//input an int and print the reverse.

#include <stdio.h>

int main (void) {

	int num = 0;

	printf("Enter a two digit number: ");
	scanf("%d", &num); 
	printf("The reversal is: ");
	while (num > 0) {
		int next = num % 10;
		printf("%d",next);
		num = num / 10;
	}
	printf("\n");
	return 0;
}
