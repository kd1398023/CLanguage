#include <stdio.h>
main()
{
	float a, b;
	float * p_a, * p_b;
	p_a = &a;
	p_b = &b;
	printf("�����l1 ?");
	scanf("%f", &a);
	printf("�����l2 ?");
	scanf("%f", &b);


	if (*p_a > *p_b) {
		printf("�傫���ق� = %lf\n", *p_a);
	}
	else {
		printf("�傫���ق� = %lf\n", *p_b);
	}

}