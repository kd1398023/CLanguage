#include <stdio.h>
main()
{
	float a, b;

	printf("２つの実数値? ");
	scanf("%f %f", &a, &b);
	if (a > b) {
		printf("大きい方は = %lf", a);
	}
	else {
		printf("大きい方は = %lf", b);
	}
	
}