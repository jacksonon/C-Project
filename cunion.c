// 共用体：相同的内存位置存储不通的数据类型

#include <stdio.h>
#include <string.h>

union Data {
	int i;
	float f;
	char str[20];
};

int main() {
	union Data data;
	printf("占用内存大小：%lu\n", sizeof(data));
	// 共用体赋值：
	data.i = 10;
	data.f = 220.5;
	strcpy(data.str, "c programming");
	// 取值：str存储破坏了i.f，同时取值会破坏。逐一赋值取值不会
	printf("%d\n", data.i);
	printf("%f\n", data.f);
	printf("%s\n", data.str);
	return 0;
}