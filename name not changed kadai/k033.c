#include <stdio.h>
main()
{
	char m;
	printf("�A���t�@�x�b�g? ");
	scanf("%c", &m);
	
	if (m < 122 && m > 90) {
		printf("���̕����́u�������v�ł�.");
	}
	else {
		printf("�G���[�ł��B\n");
	}
}