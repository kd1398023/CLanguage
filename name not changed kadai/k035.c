#include <stdio.h>
main()
{
	int no;
	printf("整数? ");
	scanf("%d", &no);

	if (no < 0) {
		printf("入力は「マイナス」です。\n");
	}
	else {
		printf("エラーです.\n");
	}
}