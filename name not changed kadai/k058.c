#include <stdio.h>
main()
{
	int d;
	d = 1;

	for (int i = 32; i <= 126; i++, d++) {
		
		printf("%0X %c ",i, i);
		if (d % 10 == 0) {
			printf("\n");
		}
		
	}	
}