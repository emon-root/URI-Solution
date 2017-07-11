#include<stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for(i=2; i<=n; i+=2){
           sum = pow(i,2);
        printf("%d^2 = %d\n", i, sum);
    }
    return 0;
}
