#include <stdio.h>
main()
{
	char m;
	printf("アルファベット? ");
	scanf("%c", &m);
	
	if (m < 122 && m > 90) {
		printf("その文字は「小文字」です.");
	}
	else {
		printf("エラーです。\n");
	}
}