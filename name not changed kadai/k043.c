#include <stdio.h>
main()
{
	int su;
	printf("文字コード(-1で入力終了)? ");
	scanf("%d", &su);

	while (su != -1) {
		printf("%c", su);
		break;
	}
	
}