#include<stdio.h>
main()
{
	int i;
	char s[50];
	printf("���������͂��Ă������� ");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		s[i]++;
		
	}
	printf("�Í����������= %s ", s );

}