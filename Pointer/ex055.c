#include <stdio.h>
main()
{
	int   a[] = { 11 , 22 , 33 , 44 , 55, 66 }, i;
	int* p_a;
	float b[] = { 11.1 , 22.2 , 33.3 , 44.4 }, sum = 0, ave;
	float* p_b;
	

	//p_a�z��̐擪�A�h���X������
	p_a = a; 
	for (i = 0; i < 6; i++)//p_a++ can also be put 
	{
		sum += *p_a;
		p_a++;
	}
	ave = sum / i;
	printf("�z��a\t���v=%.f\t����=%.3f\n", sum, ave);

	sum = 0;
	ave = 0;
	p_b = b;

	for (i = 0; i < 4; i++)
	{
		sum += *p_b;
		p_b++;
	}
	ave = sum / i;
	printf("�z��b\t���v=%.f\t����=%.3f\n", sum, ave);
	 

}