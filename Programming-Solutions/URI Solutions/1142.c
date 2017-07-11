#include<stdio.h>

int main()
{
    int num, i, m, n=1, d=4;
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        for(m=n; m<=d; m++){
            if(m%4==0)
                printf("PUM\n");
            else
            printf("%d ", m);
        }
    n+=4; d+=4;
    }
    return 0;
}
