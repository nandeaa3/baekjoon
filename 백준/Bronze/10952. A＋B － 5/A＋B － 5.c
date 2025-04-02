#include <stdio.h>
int main(void)
{
	int n, m;
    for( ; ;){
        scanf("%d %d", &n, &m);
        if(m == 0 && n == 0) break;
        printf("%d\n", n + m);
    }
}

