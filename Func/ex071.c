#include <stdio.h>
int add(int a, int b, int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, kotae = 0;
	float avg;
	printf("�������R���� : ");
	scanf("%d%d%d", &a, &b, &c);
	kotae = add(a, b, c);
	avg = heikin(a, b, c);
	printf("���v��%d�ł�\t ���ς�%.2f�ł�\n.", kotae, avg);

}

int add(int a, int b, int c) {
	int ans;
	ans = a + b + c;
	return (ans);
}

float heikin(int a, int b, int c) {
	float  ave;
	ave = (a+b+c) / 3.0; //Important for the average if you want the answer to be in exact points.!!!
	return (ave);
}
//shorter way to write the same code is in the ss!! IMPORTANT!!