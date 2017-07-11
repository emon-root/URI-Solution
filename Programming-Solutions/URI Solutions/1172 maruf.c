#include <stdio.h>

int main()
{
    int s=0, m, b=10, c=1;
    while(b--) {
        scanf("%d", &m);
        if(m>0) {
            printf("x[%d] = %d\n", s, m);
            s++;
        }
        else if(m<=0) {
            printf("x[%d] = %d\n", s, c);
            s++;
        }
    }
    return 0;
}
