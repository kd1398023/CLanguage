#include <stdio.h>
main()
{
	char f;
	int d1, d2, d3;

	printf("��������� : ");
	scanf("%c", &f);

	printf("��������� : ");
	scanf("%d%d%d", &d1, &d2, &d3);

	switch (f)
	{
	case 'd':
	case 'D':
		if (d1 > d2) {
			if (d1 > d3) {
				printf("�ő�l��%d�ł�\n", d1);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", d3);
			}
		}
		else {

		}
		
	}
}