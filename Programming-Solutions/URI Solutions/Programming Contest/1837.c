#include<stdio.h>

int main()
{
    int a, b, f, c, d, q, r;
    scanf("%d %d", &a, &b);
    if(a<0){
        c=b;
        if(b<0) c=b*-1;
        for(r=0; r<c; r++){
            f=a-r; /*a=-7,-8,-9*/
            if(a%b==0)
                break;
        }
        q = f/c;
    }
    else {
    q = a/b;
    r = a%b;
    }
    printf("%d %d\n", q, r);
    return 0;
}
