#include<stdio.h>
#include<conio.h>
int greater(int x, int y)
{
    if(x>y)
        return(x);
    else
        return(y);
}
void main()
{
    int greater(int,int);
    int n1,n2,n3,n4,r1,r2,r3;
    scanf("%d%d",&n1,&n2);

    r1 = greater(n1,n2);

    printf("%d\n",r1);
    return 0;
}
