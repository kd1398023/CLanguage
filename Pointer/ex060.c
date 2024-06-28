#include <stdio.h>
main()
{
	char data[] = "Language";
	char m, * p_data;
	int i;

	printf("data[]=%s\n", data);
	printf("ŒŸõ•¶š‚ÍH ");
	scanf("%c", &m);
	printf("ŒŸõŒ‹‰Ê‚Í, ");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++)//‚±‚ê‘‚©‚È‚­‚Ä‚às‚¯‚é
	{
		if (m == *(p_data + i))
		{
			printf("%d ", i+1);
		}
	}
	printf("‚Å‚·.\n");
}