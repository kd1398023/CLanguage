#include <stdio.h>
main()
{
	char data[] = "Language";
	char m, * p_data;
	int i;

	printf("data[]=%s\n", data);
	printf("���������́H ");
	scanf("%c", &m);
	printf("�������ʂ�, ");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++)//���ꏑ���Ȃ��Ă��s����
	{
		if (m == *(p_data + i))
		{
			printf("%d ", i+1);
		}
	}
	printf("�ł�.\n");
}