#include <stdio.h>
#include<stdlib.h>
#include <time.h>
main()
{
	int p, c;

	printf("�����o���܂����H\n ");
	scanf("%d", &p);
	
	if (p == 1) {
		printf("p �́@�O�[�ł��B\n");
	}
	if (p == 2) {
		printf("p �� �`���L�ł��B\n");
	}
	if (p == 3) {
		printf("p �́@�p�[�ł��B\n");
	}
	srand(time(0));
	c = rand() % 3+1;
	if (c == 1) {
		printf("c �́@�O�[�ł��B\n");
	}
	if (c == 2) {
		printf("c �� �`���L�ł��B\n");
	}
	if (c == 3) {
		printf("c �́@�p�[�ł��B\n");
	}
	if ((p - c + 3) % 3 == 2) {
		printf("�v���C���[�̏����ł��B\n");
	}
	if ((p - c + 3) % 3 == 1) {
		printf("�v���C���[�̕����ł��B\n");
	}
	if ((p - c + 3) % 3 == 0) {
		printf("�������ł��B\n");
	}


}