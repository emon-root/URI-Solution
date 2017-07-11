#include<stdio.h>

int main()
{
    int T, i, j, len;
    long long int sum;
    char s[501];
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%s", s);
        len = strlen(s);
        sum =0;
        for(j=0; j<len; j++){
            sum += s[j] - '0';
        }
        if(sum%3==0){
            printf("Case %d: Yes\n", i);
        }
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}
