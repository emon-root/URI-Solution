#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("Ho");
        if(i<a){
            printf(" ");
        }
        else
            printf("!\n");
    }
    return 0;
}
