#include<stdio.h>

int main()
{
    int T,i, A, B, C, temp;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
            scanf("%d%d%d", &A,&B,&C);
        if(A>=B && A>=C){
            temp = A;
        }
        else if(B>A && B>C){
            temp = B;
        }
        else if(C>A && C>B){
            temp = C;
        }
        printf("Case %d: %d\n", i, temp);
    }
    return 0;
}
