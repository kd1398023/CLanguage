#include <stdio.h>
void str2(char* m, char*m1);// �v���g�^�C�v�錾

main()
{
	char buf[256], buf2[256];
	
	printf("������?: ");
	gets(buf);
	str2(buf,buf2);
	printf("str1 = %s\nstr2 = %s\n", buf, buf2);
}

//��������t���ɃR�s�[����
//�߂�l :�@�Ȃ�
//����   : char*m . �R�s�[��
//		 : char*m1. �R�s�[��i�t���ɐݒ�) 	

void str2(char* m, char* m1)
{
	int i, j;
	for (i = 0; *(m + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++) {
		*(m1 + j) = *(m + i);
	}
	*(m1 + j) = '\0';
}