#include <stdio.h>
main()
{
	int su;
	char a;

	printf("１０進数の整数?");
	scanf("%d", &su);
	printf("アルファベット ( o or h or d )?");
	scanf("%*c%c", &a);

	switch (a)
	{
		case 'o':
			printf("%o", su);
			break;

		case'h':
			printf("%x", su);
			break;
			
		default:
			printf("%d", su);
	}
}