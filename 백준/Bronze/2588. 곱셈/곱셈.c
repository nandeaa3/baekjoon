#include <stdio.h>
int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d\n%d\n%d\n%d\n", n * (m % 10), n * (m % 100 / 10), n * (m / 100), n * (m % 10) + 10 * (n * (m % 100 / 10)) + 100 * (n * (m / 100)));
	return 0;
}