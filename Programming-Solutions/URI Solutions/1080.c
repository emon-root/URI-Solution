#include<stdio.h>

int main()
{
    int x, a, b, c, d=0;
    for(a=1; a<=100; a++){
        scanf("%d", &b);
        x++;
        if(b>d){
            c = x;
            d = b;
        }
    }
    printf("%d\n", d);
    printf("%d\n", c);
    return 0;
}
