// 存储类 auto register static extern

#include <stdio.h>

// extern使用
int mecount;
extern void write_extern();

// 函数声明
void func1(void);

// 全局变量
static int count = 10;

// static是全局变量的默认存储类
static int Count;
int Road;

int main() {
	// auto存储类,局部变量默认的存储类
	int mount;
	auto int month;
	// register存储类，定义存储在寄存器中，取决硬件和实现的限制
	register int miles;
	// 调用static
	printf("%d\n", Count);
	printf("%d\n", Road);

	while (count--) {
		func1();
	}

	mecount = 5;
	write_extern();

	return 0;
}

void func1(void) {
	static int thingy = 5;
	thingy++;
	printf("thingy为%d, count为%d\n", thingy, count);
}

// 编译：gcc aFile bFile