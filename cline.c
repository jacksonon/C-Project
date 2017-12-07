// C命令行参数

#include <stdio.h>
int main(int argc, char *argv[]) {
	if (argc == 2) {
		printf("当前参数为:%s\n", argv[1]);
	} else if (argc > 2) {
		printf("参数过多\n");
	} else {
		printf("一个参数都没有\n");
	}
}