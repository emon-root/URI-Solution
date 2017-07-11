#include<stdio.h>

int main()
{
    double A=0.0, M[12][12];
    char T[2];
    int l,i,k,j,s=0;
    scanf("%s", &T);
    for(i=0; i<=11; i++){
        for(k=0; k<=11; k++)
            scanf("%lf", &M[i][k]);
    }
    for(j=1; j<=11; j++){
        for(l=0; l<=s; l++)
            A+=M[j][l];
            s++;
    }
    if(T[0]=='S')
        printf("%.1lf\n",A);
    else if(T[0]=='M'){
        A=A/66.0;
        printf("%.1lf\n",A);
    }
    return 0;
}
