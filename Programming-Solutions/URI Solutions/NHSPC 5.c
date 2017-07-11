#include<stdio.h>
#include<math.h>

int main()
{
    int count,k,i, m, t, j,a;
    long long int n;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        count = 0;
        a=2;
        scanf("%lld", &n);
        for(j=1; j<=n; j++){
                k = sqrt(j);
                m = pow(k,2);
                if(j==m){
                    count++;
                   j+=a;
                   a+=2;
                }
        }
    printf("Case %d: %d\n", i, count);
    }
    return 0;
}
