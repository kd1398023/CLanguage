#include <Stdio.h>
main()
{
	int i = 1;

	while (i < 21) {
		printf("%3d ", i);
		if (i % 10 == 0) {
			printf("\n");
		}
		i++;
	}
}