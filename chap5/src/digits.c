// Count number of difits up to maximum of 4 digits.
#include <stdio.h>

int main (void) {
	
	int num, digits = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num > 0 && num < 10) {
		digits = 1;
	}
	else if (num < 100) {
		digits = 2;
	}
	else if (num < 1000) {
		digits = 3;
	}
	else {
		digits = 4;
	}

	printf ("The number %d has %d digits\n", num, digits);
	return 0;
}
