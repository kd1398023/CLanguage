#include <stdio.h>
#define WEEK 7
main()
{
	char* day[8] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	int i;
	char** p = day;
	//パータン�@day[i]の形式で文字列を表示
	/*for (i = 0; i < WEEK; i++) {
		printf("%s\n", day[i]);
	}*/
	//パータン�A-1、＊pを用いて文字列を表示する
	/*for (i = 0; i < WEEK; i++)
	{
		printf("%s\n", *(p + i));
	}*/
	//パータン�Aー2
	while (*p) {
		printf("%s\n", *p++);
	}

}