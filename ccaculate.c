#include <stdio.h>

int main() {
	int a, b;
	a = 10;
	b = 20;
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a++);
	printf("%d\n", a--);
	// 关系运算符：==、!=、>、<、>=、<=
	// 逻辑运算符：&& || !
	// 位运算符：& | ^ ~ << >>
	// 赋值运算符：= += -= *= /= %= <<= >>= &= ^= |=
	// 杂项运算符：sizeof() &a：变量地址 *：指向变量 ?:：条件表达式
	return 0;
}

/*
判断：
if else
? :
循环：
while
for 
do while
无限循环：for( ; ; ) {}
*/