#include<stdio.h>

int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);
    if(a<b){
            a=a+1;
    for(i=a;i<b;i++){
        if(i%5==2 || i%5==3){
            printf("%d\n", i);
        }
    }
    }
    else if(a>b){
        b=b+1;
        for(i=b; i<a;i++){
        if(i%5==2 || i%5==3){
            printf("%d\n", i);
    }
    }
    }
    return 0;
return 0;
}
