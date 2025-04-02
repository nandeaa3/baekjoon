#include <stdio.h>
int main(void)
{
	int T;
    scanf("%d", &T);
    int i;
    int n, m;
    for(i = 1; i <= T; i++){
        scanf("%d %d", &n, &m);
        printf("Case #%d: %d + %d = %d\n", i, n, m, n + m);
    }
}