#include <stdio.h>
main()
{
	int a;
	
	printf("����? ");
	scanf("%d", &a);
	if (a % 3 == 0) {
		printf("���̐��́u�����v�ł�.");
	}
	else {
		printf("���̐���");
	}
}