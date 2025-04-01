#include <stdio.h>
int main(void)
{
	int n, m, h;
	scanf("%d %d %d", &n, &m, &h);
	int max = n;
	if (max < m) {
		max = m;
	}
	if (max < h) {
		max = h;
	}
	if (n == m && m == h) {
		printf("%d", 10000 + n * 1000);
	}
	else if (n == m) {
		printf("%d", 1000 + n * 100);
	}
	else if (m == h) {
		printf("%d", 1000 + m * 100);
	}
	else if (n == h) {
		printf("%d", 1000 + n * 100);
	}
	else {
		printf("%d", max * 100);
	}
	return 0;
}
