#include <stdio.h>
main()
{
	int no;
	printf("����? ");
	scanf("%d", &no);

	if (no < 0) {
		printf("���͂́u�}�C�i�X�v�ł��B\n");
	}
	else {
		printf("�G���[�ł�.\n");
	}
}