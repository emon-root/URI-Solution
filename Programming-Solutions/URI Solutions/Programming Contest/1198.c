#include<stdio.h>

int main()
{
    long long int x, y, z;
    while(scanf("%lld%lld", &x, &y)==2){
        z=x-y;
        if(y>x)
        z=-z;
        printf("%lld\n", z);
        }
    return 0;
}
