#include <stdio.h>
main()
{
	float a, b;
	float * p_a, * p_b;
	p_a = &a;
	p_b = &b;
	printf("実数値1 ?");
	scanf("%f", &a);
	printf("実数値2 ?");
	scanf("%f", &b);


	if (*p_a > *p_b) {
		printf("大きいほう = %lf\n", *p_a);
	}
	else {
		printf("大きいほう = %lf\n", *p_b);
	}

}