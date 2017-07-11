#include<stdio.h>

int main()
{
    int N[10], V, i;
    scanf("%d", &V);
    for(i=0; i<10; i++, V=V+V){
        N[i]=V;
    }
    for(i=0; i<10; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}
