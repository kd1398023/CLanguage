#include <stdio.h>
int add(char m);
main()
{
	char m;
	int n;
	printf("アルファベット１文字? ");
	scanf("%c", &m);
	n = add(m);
	if (n == 1) {
		printf("戻り値は、%dなので入した文字は, 大文字です.\n", n);
	}
	else {
		printf("戻り値は、%dなので入した文字は, 小文字です.\n", n);
	}
}
int add(char m) {
	
	if (m>= 0x41 && m <= 0x5A) {
		return (1);
	}
	else if (m >= 0x61 && m <= 0x7A) {
		return(0);
	}		
}


//if (m >= 65 && m < 97) {
//	return (1);
//}
//else if (m <= 122 && m >= 97) {
//	return(0);
//}		