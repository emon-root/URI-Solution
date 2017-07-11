#include <stdio.h>

int main()
{
    int T, R1, R2, i, b;
    scanf("%d", &T);
    for(i=1;i<=T;i++){
        scanf("%d%d", &R1, &R2);
        b=R1+R2;
        printf("%d\n",b);
    }
    return 0;
}
