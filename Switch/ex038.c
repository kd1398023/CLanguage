#include<stdio.h>
main()
{
	int num;

	printf("���Z�q������ : ");
	scanf("%d", &num);

	if (num >= 10 && num <= 49)
	{	
		switch (num/10)
		{		

			case 1:
				printf("10�_��ł��B\n");
				break;

			case 2:
				printf("20�_��ł��B\n");
				break;

			case 3:
				printf("30�_��ł��B\n");
				break;

			case 4:
				printf("40�_��ł��B\n");

		}
	}
	else {
		printf("����[�ł��B\n");
	}
}