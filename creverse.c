// C递归：支持函数调用自身

// 数的阶乘

#include <stdio.h>

double factorial(unsigned int i) {
	if (i <= 1) {
		return 1;
	}
	return i * factorial(i - 1);
}

int fibonaci(int i) {
	if (i == 0) {
		return 0;
	}
	if (i == 1) {
		return 1;
	}
	return fibonaci(i - 1) + fibonaci(i - 2);
}

int main() {
	int i = 15;
	printf("%d的阶乘为%f\n", i, factorial(i));
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t\n", fibonaci(i));
	}
	return 0;
}