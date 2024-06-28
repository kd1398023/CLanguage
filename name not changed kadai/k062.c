#include <Stdio.h>
main()
{
	int i = 20;
	
	do
	{
		printf("%3d ", i);
		
		if (i % 11 == 0) {
			printf("\n");
		}
		i--;


	} while (i > 0);
}