#include <stdio.h>
main()
{
	int i,j,m;
	

	for (m = 1; m <= 9; m++) {

		printf("    %d", m);
	}
	printf("\n");
	printf("=====================================\n");
	for (i = 1; i <= 9; i++) {
		printf("%d | ", i);
		for (j = 1; j <= 9; j++) {
			printf("%3d ", i * j);
		}
		printf("\n");
	}
}