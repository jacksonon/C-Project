/* 基本语法 
tokens：关键字、标识符、常量、字符串值、符号等
分号 ;
注释 //
标识符：一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9
关键字：auto break else long switch 等
空格：编程基础
*/

// 数据类型

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	printf("int 存储大小：%lu \n", sizeof(int));
	printf("float 存储最大字节数：%lu \n", sizeof(float));
	printf("float 最小值：%E \n", FLT_MIN);
	printf("float 最大值：%E \n", FLT_MAX);
	printf("float 精度值：%d \n", FLT_DIG);
	return 0;
}
