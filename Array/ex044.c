#include<stdio.h>
main()
{
	char s1[10], s2[10], w[10];
	int i;

	printf("文字列 1 を入力 : ");
	scanf("%s", s1);
	printf("文字列 2 を入力 : ");
	scanf("%s", s2);

	printf("moji1 = %s\t moji2 = %s\n", s1, s2);
	printf("入れ替えると\n");
	
	for (i = 0; w[i] = s1[i]; i++);
	for (i = 0; s1[i] = s2[i]; i++);
	for (i = 0; s2[i] = w[i]; i++);
	printf("moji = %s \t moji2 = %s\n", s1, s2);
}