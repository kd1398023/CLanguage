#include <stdio.h>
main()
{
	char ope;

	printf("アルファベット? ");
	scanf("%c", &ope);

	switch (ope)
	{
		case 'a':
			printf("America\nAustralia\n");
			break;

		case 'e':
			printf("England\n");
			break;
		
		case 'i':
			printf("INDIA\n");
			break;

		case 'f':
			printf("France\n");
			break;

		case'j':
			printf("Japan\n");
			break;

		default :
			printf("入力された文字は正しくありません");
	}
}