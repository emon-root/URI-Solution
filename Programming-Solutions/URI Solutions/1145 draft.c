#include<stdio.h>
int main()
{
    int x, y, a, b=0;
    scanf("%d%d", &x, &y);
    for(a=1;a<=y; a++){
        printf("%d", a);
        b++;
        if(b<x)
            printf(" ");
        else{
        printf("\n", a);
        b=0;
        }
    }
    return 0;
}
