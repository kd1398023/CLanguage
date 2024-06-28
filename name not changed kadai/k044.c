#include <stdio.h>
main()
{
	int a;
	printf("整数(-999で終了)? ");
	scanf("%d", &a);

	while (a != -999) {
		printf("8進数 = %o\t 16進数 = %X\n", a, a);
		printf("整数(-999で終了)? ");
		scanf("%d", &a);
	}
	
}