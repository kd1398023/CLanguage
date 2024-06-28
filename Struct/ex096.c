#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};

void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data* p);
main()
{
	int a = 10;
	struct syohin_data syohin = { "ƒPƒVƒSƒ€",50 };
	display1(a);
	display2(syohin);
	display3(&syohin);
}

void display1(int a)
{
	printf("a = %d\n", a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name = %s syohin.tanka = %d\n", syohin.name, syohin.tanka);
}

void display3(struct syohin_data* p)
{
	printf("%s    %d\n", p->name, p->tanka);
}