#include<stdio.h>
main()
{
	float a, b;

	printf("�Q�̎����l? ");
	scanf("%f %f", &a, &b);
	printf("�a = %lf �� = %lf �� = %lf �� = %lf\n", a + b, a - b, a * b, a / b);
}