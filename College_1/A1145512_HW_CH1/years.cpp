#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main() {
	int n = 0;
	printf("�п�J�褸�~:");
	scanf("%d", &n); // ��J�褸�~
	/*if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
		printf("%d�O�|�~\n", n);
	} else {
		printf("%d�O���~\n", n);
	}*/
	printf("%d", n);
	printf((n % 4 == 0 && n % 100 != 0 || n % 400 == 0) ? "�O�|�~\n" : "�O���~\n");
	system("pause");
}