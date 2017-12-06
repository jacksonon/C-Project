#include <stdio.h>

extern int mecount;

void write_extern(void) {
	printf("mecount值为：%d\n", mecount);
}