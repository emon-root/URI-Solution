#include<stdio.h>
int main()
{
    int i, x, y, s = 0;
    scanf("%d%d", &x, &y);
    if (x < y)
    {
        for (i=x+1; i<y; i++){
            if (i%2!=0){
                s+=i;
            }
        }
    }
    else{
        for (i = y + 1; i < x; i++){
            if (i % 2 != 0) s += i;
        }
    }
    printf("%d\n", c);
}
