#include <stdio.h>
main()
{
	char c;
	char* p_c = &c;
	int i = 0;
	//p_c = c;
	printf("１文字入力? ");
	scanf("%c", &c);
	while (i<1) {
		printf("次の文字は %c\n", *p_c+1);
		i++;
	}
}