#include <stdio.h>
int main()
{
    double A=0.0, M[12][12];
    char T[2];
    int l,i,k,j;
    scanf("%s", &T);
    for(i=0; i<12; i++){
        for(j=0; j<12; j++)
            scanf("%lf", &M[i][j]);
    }
    for(k=0; k<12; k++){
        for(l=0; l<=11; l++)
            A+=M[k][l];
    }
    if(T[0]=='S')
        printf("%.1lf\n",A);
    else if(T[0]=='M'){
        A=A/66.0;
        printf("%.1lf\n",A);
    }
    return 0;
}
