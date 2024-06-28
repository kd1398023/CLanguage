#include<stdio.h>
main()
{
	char m;
	printf("アルファベット小文字? ");
	scanf("%c",  &m);

	for (; m <= 121; m++) {
		printf("%c ", m + 1);
	}
}