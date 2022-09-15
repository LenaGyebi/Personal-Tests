/**
 * This second.c file is to enable a user inout their figure
 * Just trying my hands on something new
 */

#include <stdio.h>

int main(void)
{
	int speed = 0;
	int time = 0;
	printf("Speed: ");
	scanf("%d", &speed);
	printf("Time: ");
	scanf("%d", &time);

	int distance = speed * time;
	printf("distance is %d\n", distance);

	return 0;
}
