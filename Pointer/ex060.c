#include <stdio.h>
main()
{
	char data[] = "Language";
	char m, * p_data;
	int i;

	printf("data[]=%s\n", data);
	printf("検索文字は？ ");
	scanf("%c", &m);
	printf("検索結果は, ");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++)//これ書かなくても行ける
	{
		if (m == *(p_data + i))
		{
			printf("%d ", i+1);
		}
	}
	printf("です.\n");
}