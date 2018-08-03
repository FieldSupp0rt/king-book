//Output max and min of four ints using least number of if statements. No arrays.

#include <stdio.h>

int main(void) {
	
	int i1, i2, i3, i4 = 0;

	printf ("Enter four integers: ");
	scanf ("%d %d %d %d", &i1, &i2, &i3, &i4);
	int temp = 0;

	//Sort the numbers twice to order the four digits 
	//(is this cheating by technically using six if statements?
	
	for (int x = 0; x < 2; x++) {
		if (i2 > i3) {		//Sort middle numbers
			temp = i3;
			i3 = i2;
			i2 = temp;
		}	
		if (i1 > i2) {		//Sort first numbers
			temp = i2;
			i2 = i1;
			i1 = temp;
		}
		if (i3 > i4) {		//Sort last numbers
			temp = i4;
			i4 = i3;
			i3 = temp;
		}
	}
	printf ("Largest: %d\n", i4);
	printf ("Smallest: %d\n", i1);

	return 0;
}
