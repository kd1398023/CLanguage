#include<stdio.h>
main()
{
	int no, sum = 0, cnt = 0;
	printf("����(-999 �ŏI��)?");
	scanf("%d", &no);
	while (no != -999) {
		sum += no;
		printf("����(-999 �ŏI��)?");
		scanf("%d", &no);
		
		cnt++;
		
	}
	printf("���v = %d\n ���� = %.2f\n", sum, (float)sum / cnt);
}