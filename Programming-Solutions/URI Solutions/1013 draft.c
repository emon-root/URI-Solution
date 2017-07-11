#include<stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d",&A,&B,&C);
    if(A>B && A>C)
        A = A;
    else if(B>C)
        A = B;
    else
        A = C;
    printf("%d eh o maior\n",A);
    return 0;
}
