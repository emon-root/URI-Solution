#include<stdio.h>

int main()
{
    int T, X, Y, i, a, sum=0;
    scanf("%d", &T);
    for(i=1; i<=T;i++){
        scanf("%d%d", &X, &Y);
        if(X==Y){
            sum = 0;
            printf("%d\n", sum);
        }
        else if(X<Y){
            for(a=X+1,sum=0;a<Y;a++)
            {
                if(a%2==1||a%2==-1)
                    sum+=a;
            }
            printf("%d\n",sum);
        }
        else{
            for(a=Y+1,sum=0;a<X;a++){
                if(a%2==1||a%2==-1)
                    sum+=a;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
