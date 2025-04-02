#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
	int n , m;
    int i;
    for(i = 1; i <= T; i++){
        scanf("%d %d", &n, &m);
        printf("Case #%d: %d\n", i, n + m);
    }
}