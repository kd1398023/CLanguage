#include<stdio.h>
main()
{
	char m;
	printf("１文字を入力? ");
	scanf("%c", &m);
	
	if (m >= 65 && m <= 122) {
		printf("あってる！");
	}
	else {
		printf("ERROR");
	}
}