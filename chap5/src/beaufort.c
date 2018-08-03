// Display beaufort scale of provided wind speed.

#include <stdio.h>

#define CALM 1
#define LIGHT_AIR 3
#define BREEZE 27
#define GALE 47
#define STORM 63

int main(void) {

	int speed = 0;

	printf("Enter the speed in knots: ");
	scanf("%d", &speed);

	if (speed < CALM ) printf("Calm\n");
	else if (speed < LIGHT_AIR) printf("Light air\n");
	else if (speed < BREEZE) printf("Breeze\n");
	else if (speed < GALE) printf("Gale\n");
	else if (speed < STORM) printf("Storm\n");
	else printf ("Hurricane\n");

	return 0;
}
