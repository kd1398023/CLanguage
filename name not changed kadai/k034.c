#include<stdio.h>
main()
{
	char m;
	printf("�P���������? ");
	scanf("%c", &m);
	
	if (m >= 65 && m <= 122) {
		printf("�����Ă�I");
	}
	else {
		printf("ERROR");
	}
}