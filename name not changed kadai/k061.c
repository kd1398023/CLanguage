#include <Stdio.h>
main()
{
	int d, i = 1;
	d = 1;
	do
	{
		printf("%3d ", i);
		
		if (i % 10 == 0) {
			printf("\n");
		}
		i++;

	} while (i < 21);
	
}