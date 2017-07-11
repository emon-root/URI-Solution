#include<stdio.h>

int main()
{
    int num, i, j;
    while(scanf("%d", &num)==1){
        for(i=1; i<=num; i++){
            for(j=num; j>=i; j--){
                printf("%d", i);
            }
            printf("\n");
        }
    }
    return 0;
}

