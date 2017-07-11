#include<stdio.h>

int main()
{
    int i, j, N[20], temp;
    for(i=0; i<20; i++){
        scanf("%d", &N[i]);
    }
    for(i=0,j=19; i<10; i++, j--){
        temp=N[i];
        N[i]=N[j];
        N[j]=temp;
    }
    for(i=0; i<20; i++){
        printf("N[%d] = %d\n",i, N[i]);
    }
    return 0;
}
/*
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
*/
