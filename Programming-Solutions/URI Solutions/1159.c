#include<stdio.h>
int main()
{
   int i,a,b=0,d=0;
   while(scanf("%d",&a)){
    if(a==0){
        break;
    }
    else{
        for(i=a;d<5;i++){
          if(i%2==0){
            b+=i;
            d++;
          }
        }
        printf("%d\n",b);
        d=0;
        b=0;
    }
   }
   return 0;
}
