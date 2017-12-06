// C数组

#include <stdio.h>

int main() {
	int n[10];
	int i, j;
	for (int i = 0; i < 10; i++) {	
		n[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		printf("每项：%d\n", n[i]);
	}
	return 0;
}