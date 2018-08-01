// Convert int to octal to 5 places padded.

#include <stdio.h>

int main (void) {

	int num = 0;
	int octal[5] = {0};

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	for (int x = 4; x >= 0; x--) {
		octal[x] = num % 8;
		num = num / 8;
	}
	
	printf("In octal, your number is: ");
	for (int x = 0; x < 5; x++) {
		printf("%d", octal[x]);
	}

	printf("\n");
	return 0;
}

