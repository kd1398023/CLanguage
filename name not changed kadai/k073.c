#include <stdio.h>
main()
{
	int su;
	char a;

	printf("�P�O�i���̐���?");
	scanf("%d", &su);
	printf("�A���t�@�x�b�g ( o or h or d )?");
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