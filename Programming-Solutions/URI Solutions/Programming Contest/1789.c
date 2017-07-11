#include<stdio.h>

int main()
{
    unsigned int i, n, a, b, c;
    while(scanf("%d", &n)!=EOF){
        for(i=1; i<=n; i++){
            scanf("%d", &b);
            if(i==1){
                c=b;
            }
            if(b>c){
                c=b;
            }
        }
        if(c<10){
            printf("1\n");
        }
        else if(c>=10 && c<20){
            printf("2\n");
        }
        else if(c>=20){
            printf("3\n");
        }
    }
    return 0;
}
