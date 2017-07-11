#include<stdio.h>

int main()
{
    int day, T, i, count;
    float kg;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%f", &kg);
        count=0;
        while(kg>1){
            kg/=2;
            count++;
        }
        printf("%d dias\n", count);
    }
    return 0;
}
