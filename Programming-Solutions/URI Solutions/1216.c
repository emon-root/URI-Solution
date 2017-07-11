#include <stdio.h>

int main(){
    char str[1000];
    long long distance, count=0;
    double total=0.0;

    while(scanf("%[^\n]",&str) != EOF){
          scanf("%*c%lld%*c",&distance);
          total += distance;
          count++;
    }

    printf("%.1lf\n", total/(float)count);
    return 0;
}
