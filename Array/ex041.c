#include <stdio.h>
main()
{
	float box[3], sum;
	int i;

	for (sum = 0, i = 0; i < 3; i++) {
		
		printf("���������� : ");
		scanf("%f", &box[i]);

		sum += box[i];
	}

	printf("���v��%.2f�ł�.\n���ς�%.2f�ł��B\n", sum, sum / 3);

}