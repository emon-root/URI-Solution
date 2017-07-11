#include<stdio.h>

int main()
{
    double result, b, c;
    int i, T, a;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
            scanf("%d%lf%lf", &a, &b, &c);
        if(b>0){
            result = (double)a/b;
            printf("Case %d: %.2lf\n", i, result);
        }
        else
            printf("Case %d: impossible\n", i);
    }
    return 0;
}
