#include<stdio.h>

int main()
{
    unsigned int i,t, n, sum=1;
    scanf("%d", &n);
    t = n;
    for(i=1; i<=n; i++){
        sum*=t;
        t--;
    }
    printf("%d\n", sum);
}
