#include <stdio.h>
main()
{
	char c;
	char* p_c = &c;
	int i = 0;
	//p_c = c;
	printf("�P��������? ");
	scanf("%c", &c);
	while (i<1) {
		printf("���̕����� %c\n", *p_c+1);
		i++;
	}
}