#include<stdio.h>
int main()
{
    long long int x=1,y=1,f,g;
    int i,j;
    while((scanf("%lld%lld",&f,&g))!=EOF)
    {
        for(i=f ; i>0 ; i--)
        {
            x*=i;

        }
        for(j=g ; j>0 ; j--)
        {
            y*=j;
        }
        printf("%lld\n",x+y);
        x=1;
        y=1;
    }

return 0;
}
