#include <stdio.h>
main()
{
	char m;
	printf("１文字入力? ");
	scanf("%c", &m);

	if (m <= 90 && m >= 65) {
		printf("変換結果は %c\n", m + 32);
	}
	else {
		if (m <= 122 && m >= 95) {
			printf("変換結果は %c\n", m - 32);
		}
		else {
			printf("%c", m);
		}
	}
}