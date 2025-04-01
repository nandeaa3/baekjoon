#include <stdio.h>
int main(void)
{
	int T;
    scanf("%d", &T);
    int i;
    int n, m;
    for(i = 0; i < T; i++){
        scanf("%d %d", &n, &m);
        printf("%d\n", n + m);
    }
	return 0;
}