// 输入输出

#include <stdio.h>

int main() {
	float f;
	printf("请输入一段文字\n");
	scanf("%f", &f);
	printf("%f\n", f);

	int c;
	printf("输入一个串：");
	c = getchar();
	printf("输入值为：");
	putchar(c);
	printf("\n");

	// gets() puts()
	// scanf() printf()
	return 0;
}