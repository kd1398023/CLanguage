#include <stdio.h>
main()
{
	char m;
	printf("�P��������? ");
	scanf("%c", &m);

	if (m <= 90 && m >= 65) {
		printf("�ϊ����ʂ� %c\n", m + 32);
	}
	else {
		if (m <= 122 && m >= 95) {
			printf("�ϊ����ʂ� %c\n", m - 32);
		}
		else {
			printf("%c", m);
		}
	}
}