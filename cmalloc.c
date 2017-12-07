// 内存管理

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char name[100];
	char *description;
	// 动态分配内存:calloc();
	description = malloc(200 * sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "错误：不能动态请求内存\n");
	} else {
		strcpy(description, "C语言内存管理");
	}
	printf("name = %s\n", name);
	printf("description: %s\n", description);

	// 重新调整内存：
	description = realloc(description, 100 * sizeof(char));
	// 释放内存
	free(description);
}