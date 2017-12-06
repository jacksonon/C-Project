// 常量：整数常量、浮点常量、字符常量、字符串常量

// 定义常量
#include <stdio.h>

// 预处理器定义常量
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main() {
	int area;
	area = LENGTH * WIDTH;
	printf("面积是：%d \n", area);
	printf("%c", NEWLINE);

	// const常量实践
	const int WLENGTH = 10;
	const int WWIDTH = 5;
	const char WNEWLINE = '\n';
	int warea;
	warea = WLENGTH * WWIDTH;
	printf("%d %c", warea, NEWLINE);
	return 0;
}