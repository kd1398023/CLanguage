#include <stdio.h>
main()
{
	float x[3][2];
	int i, j;

	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 2; j++) 
		{
			printf("x[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
		}
		printf("%ds—ñ‚Ì•½‹Ï = %.2f\n", i, (x[i][0] + x[i][1]) / 2);

	}
}