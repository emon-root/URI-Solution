#include<stdio.h>

int main()
{
    int yes=0, no=0, i, t, ans;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%d", &ans);
        if(ans==1){
            no++;
        }
        else if(ans==0){
            yes++;
        }
    }
    if(yes>no){
        printf("Y\n");
    }
    else
        printf("N\n");
    return 0;
}
