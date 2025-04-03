#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int i, j, k;
	int a, b, c;
	int d[101] = {0,};
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		for (j = a; j <= b; j++) {
			d[j] = c;
		}
	}
	for (k = 1; k <= n; k++) {
		printf("%d ", d[k]);
	}
}
