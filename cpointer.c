// 指针

#include <stdio.h>
#include <stdlib.h>

// 回调函数：函数指针作为某个函数的参数
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void)) {
	for (size_t i = 0; i < arraySize; i++) {
		// 使用指针才能直接访问到地址改变值：*array = &array
		array[i] = getNextValue();
	}
}

// 获取随机值：
int getNextRandomValue(void) {
	return rand();
}

int max(int x, int y);

int main() {
	int var1;
	char var2[10];
	printf("var1地址：%p\n", &var1);
	printf("var2地址：%p\n", &var2);
	int *ip;
	ip = &var1;
	printf("ip的地址：%p\n", ip);
	// 使用指针访问值
	printf("值是：%d\n", *ip);
	// NULL指针:值是0
	int *ptr = NULL;
	printf("ptr的值是：%p\n", ptr);

	// 函数指针
	int (*f)(int, int) = &max;
	int a, b, c, d;
	printf("请输入3个数字：\n");
	scanf("%d %d %d", &a, &b, &c);
	d = f(f(a, b), c);
	printf("最大值是：%d\n", d);

	// 使用回调函数：a函数调用b获取值
	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", myarray[i]);
	}
	printf("\n");
	return 0;
}

int max(int x, int y) {
	return x > y ? x : y;
}

