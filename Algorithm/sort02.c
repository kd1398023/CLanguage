#include <stdio.h>

main()
{
	int i, j, d[] = { 30,7,25,16,10 },w;

	printf("ソート前\n");
	for (i = 4; i >=0 ; i--) {
		printf("d[%d]:%d\n", i, d[i]);
	}
	
	for (i = 4; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (d[j] > d[j + 1])
			{
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}
		}
	}
	printf("ソート後\n");
	for (i = 4; i >= 0; i--) {
		printf("d[%d]:%d\n", i, d[i]);
	}

}