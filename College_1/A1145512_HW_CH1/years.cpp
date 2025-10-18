#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main() {
	int n = 0;
	printf("請輸入西元年:");
	scanf("%d", &n); // 輸入西元年
	/*if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
		printf("%d是閏年\n", n);
	} else {
		printf("%d是平年\n", n);
	}*/
	printf("%d", n);
	printf((n % 4 == 0 && n % 100 != 0 || n % 400 == 0) ? "是閏年\n" : "是平年\n");
	system("pause");
}