#include<stdio.h>
#include<math.h>
int main()
{

    double ab,ab1;
    long long int x,p, m,p1,lp1,lx,lx1,n,p2,a1,lp2,res1,l,res,a,b;
    scanf("%lld %lld",&x,&p);
    if(1<=x && x<=999999 && 1<=p && p<=1000000000000000){
        if(x%10==1){
            res1=p%10;
            res=res1+1;
        }
        else{
            if(p>4){
                m=p/4;
            }
            else{
                m=0;
            }
            l=x%10;
            p1=4;
            ab=pow(l,p1)-1.0;
            a=ab;
            b=l-1;
            lp1=l*(a/b);
            lx=lp1%10;
            if(p%4!=0){
                p2=p%4;
                ab1=pow(l,p2)-1.0;
                a1=ab1;
                lp2=l*a1/b;
                lx1=lp2%10;
            }
            else{
                lx1=0;
            }
            res1=m*lx+lx1+1;
            res=res1%10;
        }
        printf("%lld\n",res);
    }
    return 0;
}
