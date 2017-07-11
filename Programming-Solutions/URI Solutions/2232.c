#include<stdio.h>
#include<math.h>

int main()
{
    int T, n, i, sum;
    scanf("%d", &T);
    while(T--){
            sum=0;
        scanf("%d", &n);
        for(i=0; i<n; i++){
            sum += pow(2, i);
        }
        printf("%d\n", sum);
    }
    return 0;
}
