#include <stdio.h>
main()
{
	int a;
	printf("����(-999�ŏI��)? ");
	scanf("%d", &a);

	while (a != -999) {
		printf("8�i�� = %o\t 16�i�� = %X\n", a, a);
		printf("����(-999�ŏI��)? ");
		scanf("%d", &a);
	}
	
}