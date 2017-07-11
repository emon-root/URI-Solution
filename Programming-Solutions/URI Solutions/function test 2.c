#include<stdio.h>

int max(int x, int y)
{
    if(x>y){
        return x;
    }
    else
        return y;
}
int main()
{
    int max(int, int);
    int a, b, c, l, j, k;
    scanf("%d%d%d", &a, &b, &c);
    l = max(a,b);
    j = max(b,c);
    k = max(c,a);
    puts(k);
    return 0;
}
