#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d%d",&a,&b);
    do{
            if(a==0 || b==0){
                break;
            }
    else if(a>=b){
            for(i=b;i<=a;i++)
            {
                printf("%d ",i);
                c=c+i;
            }
    }
            else{
                for(i=a;i<=b;i++)
                {
                    printf("%d ",i);
                    c=c+i;
                }
            }
            printf("Sum=%d\n",c);
            scanf("%d%d",&a,&b);
            c=0;
    }while(1);
   return 0;
}
