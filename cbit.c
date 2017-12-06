// 位域

#include <stdio.h>
#include <string.h>

// 简单的结构体
struct {
	unsigned int widthValidated;
	unsigned int heightValidated;
} strtus1;

// 位域结构
struct {
	unsigned int widthValidated : 1;
	unsigned int heightValidated : 1;
} status2;

int main() {

	struct bs
	{
		unsigned a : 1;
		unsigned b : 3;
		unsigned c : 4;
	}bit, *pbit;

	bit.a = 1;
	bit.b = 7;
	bit.c = 15;
	printf("%d,%d,%d\n", bit.a, bit.b, bit.c);
	pbit = &bit;
	pbit->a = 0;
	pbit->b &= 3;//pbit->b = pbit->b & 3;
	pbit->c |= 1;
	printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c);

	// 位域占用内存对比
	printf("普通结构体：%lu \n 位域结构体：%lu\n", sizeof(strtus1), sizeof(status2));

	return 0;
}