// Print the closest departing flight from 24 hour time.

#include <stdio.h>

int getTimestamp (int hour, int min); 		//Create a timestamp of seconds elsapsed since midnight.
int getTimeDiff (int time1, int time2);  	//Helper method for getting time differences in seconds.

int main (void) {

	int hour, min = 0;

	printf ("Enter a 24-hour time: ");
	scanf ("%d:%d", &hour, &min);

        int diff_1 = getTimeDiff(getTimestamp(8, 00), getTimestamp(hour, min));
        int diff_2 = getTimeDiff(getTimestamp(9, 43), getTimestamp(hour, min));
        int diff_3 = getTimeDiff(getTimestamp(11, 19), getTimestamp(hour, min));
        int diff_4 = getTimeDiff(getTimestamp(12, 47), getTimestamp(hour, min));
        int diff_5 = getTimeDiff(getTimestamp(14, 00), getTimestamp(hour, min));
        int diff_6 = getTimeDiff(getTimestamp(15, 45), getTimestamp(hour, min));
        int diff_7 = getTimeDiff(getTimestamp(19, 00), getTimestamp(hour, min));
        int diff_8 = getTimeDiff(getTimestamp(21, 45), getTimestamp(hour, min));

	//IN PROGRESS

	return 0;
}

int getTimestamp (int hour, int min){
	return (hour * 3600) + (min * 60);
}

int getTimeDiff (int time1, int time2) {
	int diff = time1 - time2;
	return diff < 0 ? -diff : diff;
}
