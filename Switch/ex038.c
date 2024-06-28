#include<stdio.h>
main()
{
	int num;

	printf("演算子を入れて : ");
	scanf("%d", &num);

	if (num >= 10 && num <= 49)
	{	
		switch (num/10)
		{		

			case 1:
				printf("10点台です。\n");
				break;

			case 2:
				printf("20点台です。\n");
				break;

			case 3:
				printf("30点台です。\n");
				break;

			case 4:
				printf("40点台です。\n");

		}
	}
	else {
		printf("えらーです。\n");
	}
}