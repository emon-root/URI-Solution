#include<stdio.h>
int main(){
    int i,count=0;
    float n,sum=0.0,Avg;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0){
            sum+=n;
            count++;
        }
        Avg=sum/(float)count;
    }
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",Avg);
    return 0;
}
