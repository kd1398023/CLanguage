#include<stdio.h>
main()
{
	int i,n;
	char s[21];
	printf("���������͂��Ă������� ");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[>", i);
		scanf("%d", &n);
		s[i] = s[i] - n;


	}
	printf("�Í����������= %s ", s);


}