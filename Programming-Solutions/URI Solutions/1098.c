#include<stdio.h>
int main()
{
    double i,j;
    double b=0,c=0;
    for(i=0.0,j=1;i<=2;j++){
        if(c==0){
            printf("I=%.0lf J=%.0lf\n",i,j);
        }
        else{
            printf("I=%.1lf J=%.1lf\n",i,j);
        }

        b++;
        if(b==3){
            i+=0.2;
            j=i;
            b=0;
            c++;
        }
        if(c==5){
            c=0;
        }
    }
    return 0;
}
