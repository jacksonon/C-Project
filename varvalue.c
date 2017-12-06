// 变量

#include <stdio.h>

// 变量声明
extern int a, b;
extern int c;
extern float f;

int main() {
	// 变量定义
	int a, b;
	int c;
	float f;

	// 初始化
	a = 10;
	b = 20;
	c = a + b;
	printf("c的值：%d \n", c);

	f = 70.0/3.0;
	printf("f的值：%f \n", f);// 精度为6位

	return 0;
}