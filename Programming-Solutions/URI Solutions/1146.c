#include<stdio.h>

int main()
{
    int i, n;
    do{
        scanf("%d", &n);
        if(n==0) break;

        else{
            for(i=1;i<n;i++){
                printf("%d ", i);
            }
            printf("%d\n", n);
        }
    }while(1);
    return 0;
}
