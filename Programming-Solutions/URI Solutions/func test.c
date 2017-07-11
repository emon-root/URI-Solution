#include<stdio.h>

char prime(int n){
    int i, k=0;
    char yes[6]={prime};
    for(i=2; i<n/2;i++){
        if(n%i==0){
            k=1;
        }
    }
    return k;
}
int main()
{
    int num, ans;
    while(scanf("%d", &num)==1){
        ans = prime(num);
        if(ans==0){
            printf("%d is prime.\n", num);
        }
        else
            printf("%d is not prime.\n", num);
    }
    return 0;
}
