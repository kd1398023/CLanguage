#include <stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
					{40, 50, 60},
					{70,80,90} };

	int* p_tbl, i;
	p_tbl = tbl[1]; //&tbl[0][0]����������--
	printf("2�����z��tbl�̓��e\n");
	for (i = 0; i < 3; i++)
	{
		printf("%3d ", *p_tbl++);
	}


}