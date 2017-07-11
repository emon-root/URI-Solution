#include<stdio.h>

int main()
{
    int m,T, a, b, i, sum;
    scanf("%d", &T);
    for(m=1; m<=T; m++){
    scanf("%d%d", &a,&b);
    for(i=a, sum=0; i<=b;i++){
        if(i%2==1){
            sum+=i;
        }
    }
    printf("Case %d: %d\n",m, sum);
    }
    return 0;
}
