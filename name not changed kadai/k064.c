#include <Stdio.h>
main()
{
	int i = 20;

	while (i > 0) {
		printf("%3d ", i);
		if (i % 11 == 0) {
			printf("\n");
		}
		i--;
	}
}