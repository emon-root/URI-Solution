#include<stdio.h>

int main()
{
    int T, a, b;
    scanf("%d", &T);
    while(T--){
        scanf("%d%d", &a, &b);
        if(a>b){
            printf(">\n");
        }
        else if(a<b){
            printf("<\n");
        }
        else
            printf("=\n");
    }
    return 0;
}
