// 函数、作用域

#include <stdio.h>

// 全局变量声明
int g; // int g = 20;

// 声明
int max(int num1, int num2);

int main() {
	// 局部变量
	int a = 100;
	int b = 200;
	int ret;
	ret = max(a, b);
	printf("最大值：%d\n", ret);
}

int max(int num1, int num2) {
	int result;
	if (num1 > num2) {
		result = num1;
	} else {
		result = num2;
	}
	return result;
}