#include<stdio.h>

int main()
{
    int i=1, n, m, pre=0, next=1;
    scanf("%d", &n);
    do{
        printf("%d ", pre+next);
        pre=pre+next;
        next=pre;
        i++;
    }while(i<=n);
    return 0;
}
