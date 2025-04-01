#include <stdio.h>
int main(void)
{
	int h, m;
    scanf("%d %d", &h, &m);
    int sum = h * 60 + m;
    sum = sum - 45;
    if (sum < 0){
        sum = sum + (60 * 24);
    }
    h = sum / 60;
    m = sum % 60;
    printf("%d %d", h, m);
    return 0;
}


