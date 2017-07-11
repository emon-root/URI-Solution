#include<stdio.h>

int main()
{
    int X, Y, i;
    scanf("%d%d", &X, &Y);
    if(X>Y){
        int Total = 0;
        for(i=Y; i<=X;i++){
            if(i%13!=0){
                    Total+=i;
            }
        }
        printf("%d\n", Total);
    }
    else if(X<Y){
        int Total1=0;
        for(i=X; i<=Y; i++){
            if(i%13!=0){
                Total1+=i;
            }
        }
        printf("%d\n", Total1);
    }
    return 0;
}
