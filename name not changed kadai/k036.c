#include <stdio.h>
main()
{
	int no, no2;
	printf("����1 ? ");
	scanf("%d", &no);
	printf("����2 ? ");
	scanf("%d", &no2);

	if (no < no2) {
		printf("%d �̕��� %d ��� %d ������\n", no2, no, no2 - no);
	}
	else {
		if (no > no2) {

			printf("%d �̕��� %d ��� %d �傫��\n", no, no2, no - no2);
		}
	}
}