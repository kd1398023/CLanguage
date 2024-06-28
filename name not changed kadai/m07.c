#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char numbers[] = "0123456789ABCDEF";

void fromDec(unsigned long decimal, unsigned long base, char converted[])
{
	int w = 0, i;
	unsigned long r;
	char ch;

	do {
		r = decimal % base;
		converted[w++] = numbers[r];
		decimal /= base;
	} while (decimal > 0);
	converted[w] = '\0';

	for (i = 0; i < w / 2; i++) {
		ch = converted[i];
		converted[i] = converted[w - i - 1];
		converted[w - i - 1] = ch;
	}
}

unsigned long convertNumber(char ch)
{
	unsigned long value = 0;

	while (numbers[value] != toupper(ch))
		value++;
	return value;
}

unsigned long toDec(char value[], unsigned long base)
{
	unsigned long decimal = 0, weight = 1;
	size_t leng, i;
	leng = strlen(value);
	for (i = 0; i < leng; i++) {
		decimal += convertNumber(value[leng - i - 1]) * weight;
		weight *= base;
	}
	return decimal;
}

void convertBase(char in[], unsigned long ib, char out[], unsigned long ob)
{
	fromDec(toDec(in, ib), ob, out);
}