//  C强制类型转换 （type_name) expression

#include <stdio.h>

int main() {
	// 强制类型转换
	int sum = 17, count = 5;
	double mean;
	mean = (double) sum / count;
	printf("mead的值为：%f\n", mean);

	// 整数提升
	int i = 17;
	char c = 'c';
	int sum2 = i + c;
	printf("sum的值为：%d\n", sum2);

	return 0;
}