#include<stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i,k[19];
	char s[20];
	srand(time(0));
	
	printf("文字列を入力してください ");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 5 ;
		s[i]+=k[i];
	}
	printf("暗号化文字列は= %s \n", s);
	printf("暗号化キー=");
	for (i = 0; s[i] != '\0'; i++) {
		printf(" %d ", k[i]);
	}

}