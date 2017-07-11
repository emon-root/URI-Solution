#include<stdio.h>

int main()
{
    int i, a, n;
    scanf("%d", &a);
    for(i=a; i<=a+10; i++){
            if(i%2==0){
                    i+=1;
                printf("%d\n", i);
            }
            else if(i%2!=0){
                printf("%d\n", i);
            }
    }
    return 0;
}
