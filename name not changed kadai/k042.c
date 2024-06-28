#include<stdio.h>
main()
{
	int no, gokei, cnt = 0;
	gokei = 0;
	no = 0;
	/*printf("%d");*/
	
	while (gokei < 300) {
		gokei += no;
		no++;
		printf("%d+", no);
		cnt++;
	}
	gokei += no;
	printf("%d = %d", no, gokei);
	cnt++;
}