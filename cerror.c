// C错误处理:返回1或null，同时设置一个错误代码errno
// perror() 函数显示您传给它的字符串，后跟一个冒号、一个空格和当前 errno 值的文本表示形式
// strerror() 函数，返回一个指针，指针指向当前 errno 值的文本表示形式

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int main() {
	FILE *pf;
	int errnum;
	pf = fopen("unexist.txt", "rb");
	if (pf == NULL) {
		errnum = errno;
		fprintf(stderr, "错误号：%d\n", errno);
		perror("通过perror输出错误");
		fprintf(stderr, "打开文件错误：%s\n", strerror(errnum));
	} else {
		fclose(pf);
	}

	// 被0除的错误：
	int dividend = 20;
	int divisor = 0;
	int quotient;

	if (divisor == 0) {
		fprintf(stderr, "除数为0退出运行...\n");
		exit(-1);
	}
	quotient = dividend / divisor;
	fprintf(stderr, "quotient变量的值为：%d\n", quotient);
	exit(0);

	return 0;
}