#include <stdio.h>
int main(void)
{
	int h, m;
    scanf("%d %d", &h, &m);
    int sum;
    sum = h * 60 + m;
    int n;
    scanf("%d", &n);
    sum = sum + n;
    if(sum >= 60 * 24){
        sum -= 1440;
    }
    h = sum / 60;
    m = sum % 60;
    printf("%d %d", h, m);
    return 0;
}
