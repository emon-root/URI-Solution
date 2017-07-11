#include<stdio.h>
int main()
{
    int a, x, y, z=0;
    scanf("%d%d", &a, &x);
    for(y=1; y<=x; y++){
        printf("%d", y);
        z++;
        if(z<a)
            printf(" ");
        else{
            printf("\n");
            z=0;
        }
    }
    return 0;
}
