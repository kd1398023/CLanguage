#include <stdio.h>
void maxmin(int a, int b, int c, int* max, int* min);

main()
{
	int a, b, c, max, min;

	printf("���l��3����:  ");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("�ő�l = %d   �ŏ��l = %d\n", max, min);
}


void maxmin(int a, int b, int c, int* max, int* min)
{
	//�ő�l�����߂�
	//���ɍő�l�Ƃ���x ��max �ɓ����
	*max = a;
	//b to ��r����b ���傫���ꍇ��max�ɓ���� 
	if (b > *max) {
		*max = b;
	}
	//c�Ɣ�r����c���傫���ꍇ��max �ɓ����

	if (c > *max) {
		*max = c;
	}

	//�ŏ��l�����߂�
	//���ɍŏ��l�Ƃ���x ��max �ɓ����
	*min = a;
	//b to ��r����b ���������ꍇ��min�ɓ���� 
	if (b < *min) {
		*min = b;
	}
	//c�Ɣ�r����c���������ꍇ��min �ɓ����

	if (c < *min) {
		*min = c;
	}
}