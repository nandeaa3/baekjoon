#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	if (n > 0 && m > 0) {
		printf("%d", 1);
	}
	else if (n < 0 && m > 0) {
		printf("%d", 2);
	}
	else if (n < 0 && m < 0) {
		printf("%d", 3);
	}
	else if (n > 0 && m < 0) {
		printf("%d", 4);
	}
}








