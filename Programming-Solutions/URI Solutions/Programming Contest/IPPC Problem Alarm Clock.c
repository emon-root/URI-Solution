#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n, i;
    bool z;
    scanf("%d%d", &n, &i);
    z=i;
    if(n==1||n==2||n==3||n==4||n==5||n==6){
            if(z==false){
                printf("7:00\n");
            }
            else{
                printf("10:00\n");
            }
    }
    else if(n==0)
        printf("10:00\n");
    return 0;
}
