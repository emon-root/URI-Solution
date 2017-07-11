#include<stdio.h>

int main()
{
    int i, n=1;
    printf("S = 1 +");
    for(i=1; i<=100; i++){
        printf(" %d ", n/i);
        if(i<100){
            printf("+");
        }
    }
    return 0;
}
