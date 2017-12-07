// C预处理器

#include <stdio.h>

#define MAX_ARRAY_LENGTH 20
#undef FILE_SIZE
#define FILE_SIZE 42

#if !defined (MESSAGE)
	#define MESSAGE "YOU WISH!"
#endif

#ifndef MESSAGE
	#define MESSAGE "bitch"
#endif

#ifdef DEBUG
#endif

// 宏延续运算符：'\'
#define message_for(a, b) \
	printf(#a " and " #b ": 使用延续运算符\n");

// 标记粘贴运算符 ##
#define tokenpaster(n) printf("token" #n " = %d\n", token##n)

// 参数化的宏
#define square(x) ((x) * (x))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
	printf("File : %s\n", __FILE__);
	printf("Data : %s\n", __DATE__);
	printf("Time : %s\n", __TIME__);
	printf("Line : %d\n", __LINE__);
	printf("ANSI : %d\n", __STDC__);
	message_for("王家伟", "开发者");

	int token34 = 40;
	tokenpaster(34);

	printf("%s\n", MESSAGE);

	printf("最大值:%d\n", MAX(10, 11));

	return 0;
}