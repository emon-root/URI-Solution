#include<stdio.h>
int main()
{
    int i, n, First=0, Second=1, Next;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        if(i<=1){
            Next = i;
        }
        else{
            Next = First+Second;
            First = Second;
            Second = Next;
        }
            printf("%d", Next);
        if(i<n-1){
            printf(" ");
        }
        else if(i==n-1){
            printf("\n");
        }
    }
    return 0;
}
