#include<stdio.h>
int main()
{
    int a[101],t,T;
    scanf("%d",&t);
    for(T=1; T<=t; T++){
        scanf(" %[^\n]",a);
        printf("Case %d:%s\n",T,a,strupr(a));
    }

    return 0;
}
