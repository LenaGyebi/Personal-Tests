/**
 * This second.c file is to enable a user inout their figure
 * Just trying my hands on something new
 */

#include <stdio.h>

int main(void)
{
	int speed = 0;
	int time = 0;

	float x = 0;
	double y = 0;

	printf("Speed: ");
	scanf("%d", &speed);
	printf("Time: ");
	scanf("%d", &time);

	printf("float : ");
	scanf("%f", &x);
	printf("double: ");
	scanf("%lf", &y);

	printf("double: %lf\n", y);
	printf("float: %f\n", x);

	int distance = speed * time;
	printf("distance is %d\n", distance);

	

	return 0;
}
