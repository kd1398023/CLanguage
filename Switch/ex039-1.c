#include <stdio.h>
main()
{
	char f;
	int d1, d2, d3;

	printf("処理を入力 : ");
	scanf("%c", &f);

	printf("整数を入力 : ");
	scanf("%d%d%d", &d1, &d2, &d3);

	switch (f)
	{
	case 'd':
	case 'D':
		if (d1 > d2) {
			if (d1 > d3) {
				printf("最大値は%dです\n", d1);
			}
			else
			{
				printf("最大値は%dです\n", d3);
			}
		}
		else {

		}
		
	}
}