#include <stdio.h>
void str2(char* m, char*m1);// プロトタイプ宣言

main()
{
	char buf[256], buf2[256];
	
	printf("文字列?: ");
	gets(buf);
	str2(buf,buf2);
	printf("str1 = %s\nstr2 = %s\n", buf, buf2);
}

//文字列を逆順にコピーする
//戻り値 :　なし
//引数   : char*m . コピー元
//		 : char*m1. コピー先（逆順に設定) 	

void str2(char* m, char* m1)
{
	int i, j;
	for (i = 0; *(m + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++) {
		*(m1 + j) = *(m + i);
	}
	*(m1 + j) = '\0';
}