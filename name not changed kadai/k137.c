#include <stdio.h>
int add(char m);
main()
{
	char m;
	int n;
	printf("�A���t�@�x�b�g�P����? ");
	scanf("%c", &m);
	n = add(m);
	if (n == 1) {
		printf("�߂�l�́A%d�Ȃ̂œ�����������, �啶���ł�.\n", n);
	}
	else {
		printf("�߂�l�́A%d�Ȃ̂œ�����������, �������ł�.\n", n);
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