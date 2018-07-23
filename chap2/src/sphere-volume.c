//Calculate volume of sphere to 2 decimal places

#include<stdio.h>

#define PI 3.14f
#define DIV (4.0f / 3.0f)

int main(void) {
	float radius;

	printf("Enter radius: ");
	scanf ("%f", &radius);

	float volume = DIV * PI * (radius * radius * radius);
	printf ("Volume: %.2f\n", volume);

	return 0;
} 
