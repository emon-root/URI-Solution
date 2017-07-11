#include<stdio.h>

int main()
{
    char str[100];
    long long int dis;
    scanf("%[^\n]",&str);
    scanf("%*c%lld%*c",&dis);
    puts(str);
    printf("%lld\n", dis);

    return 0;
}
