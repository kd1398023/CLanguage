#include <stdio.h>
main()
{
	float a, b;
	float * p_a, * p_b;
	p_a = &a;
	p_b = &b;
	printf("ŽÀ”’l1 ?");
	scanf("%f", &a);
	printf("ŽÀ”’l2 ?");
	scanf("%f", &b);


	if (*p_a > *p_b) {
		printf("‘å‚«‚¢‚Ù‚¤ = %lf\n", *p_a);
	}
	else {
		printf("‘å‚«‚¢‚Ù‚¤ = %lf\n", *p_b);
	}

}