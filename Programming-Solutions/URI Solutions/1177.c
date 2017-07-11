#include<stdio.h>

int main()
{
    int N[1000], i, a, j;
    scanf("%d", &a);
    for(i=0, j=0; i<1000; i++){
        N[i]=j;
        j++;
        if(j==a){
            j=0;
        }
    }
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
