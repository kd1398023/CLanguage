#include <stdio.h>
main()
{
	int i, sum = 0, cnt;
	i = 0; 
	cnt = 0; 
	printf("����(-999�ŏI��)?");
	scanf("%d", &i);
	
	do
	{
		sum += i; 
		cnt++; 
		printf("����(-999�ŏI��)?");
		scanf("%d", &i);
		
	
	} while (i != -999);
	printf("���v = %d", sum);

	printf("���� = %.2f", (float)sum / cnt);

}