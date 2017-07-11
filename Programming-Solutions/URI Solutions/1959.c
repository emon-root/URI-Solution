#include<stdio.h>
long long int func(long long int N, long long int L){
    N = N*L;
    return N;
}
int main()
{
    long long int N;
    long long int L;
    scanf("%lld%lld", &N, &L);
    printf("%lld\n", func(N, L));
    return 0;
}
