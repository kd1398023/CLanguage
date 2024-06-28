#include <stdio.h>
main()
{
	int gokei, no, cnt;
	gokei = 0;
	no = 0;
	cnt = 0;
	do
	{	
		gokei += no;
		no++;
		printf("%d+", no);
		cnt++;
	} while (gokei < 300);
	gokei += no;
	printf("%d = %d", no, gokei);
	cnt++;
}