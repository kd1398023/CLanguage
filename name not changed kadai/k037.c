#include<stdio.h>
main()
{
	int no;

	printf("0 ����P�O�O�܂ł̐���? ");
	scanf("%d", &no);
	
	if (no > 90) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł��B\n");
	}
	else {
		if (no < 90 && no>80) {
			printf("���̐��l�̔��茋�ʂ́u4�v�ł��B\n");
		}
		else {
			if (no < 80 && no>50) {
				printf("���̐��l�̔��茋�ʂ́u3�v�ł��B\n");
			}
			else {
				if (no < 50 && no>30) {
					printf("���̐��l�̔��茋�ʂ́u2�v�ł��B\n");
				}
				else {
					if (no < 30 && no>0) {


						printf("���̐��l�̔��茋�ʂ́u1�v�ł��B\n");
					}
				}

			}

		}
	}
}