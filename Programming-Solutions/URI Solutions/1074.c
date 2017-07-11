#include<stdio.h>

int main()
{
    int N, n;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &n);
        if(n==0){
            printf("NULL\n");
        }
        else if(n%2==0){
                if(n>0){
                 printf("EVEN POSITIVE\n");
                }
                else if(n<0){
                    printf("EVEN NEGATIVE\n");
                }
        }
        else if(n%2!=0){
            if(n>0){
                 printf("ODD POSITIVE\n");
                }
                else if(n<0){
                    printf("ODD NEGATIVE\n");
                }
        }
    }
    return 0;
}
