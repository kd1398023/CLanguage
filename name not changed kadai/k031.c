#include <stdio.h>
main()
{
	float a, b;

	printf("�Q�̎����l? ");
	scanf("%f %f", &a, &b);
	if (a > b) {
		printf("�傫������ = %lf", a);
	}
	else {
		printf("�傫������ = %lf", b);
	}
	
}