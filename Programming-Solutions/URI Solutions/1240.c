#include<stdio.h>

int main()
{
    long long int i, n, a, b, c, d;
    scanf("%d", &n);
    for(i=n; i>0; i--){
        scanf("%lld%lld", &a, &b);
        d = 1;
        c = b;
        while(c > 0){
            c /= 10;
            d *= 10;
        }
        if(a%d == b)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
    return 0;
}
