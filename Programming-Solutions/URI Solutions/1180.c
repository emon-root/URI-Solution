int main()
{
   int a,b,c,d,e,N, p, low;
    scanf("%d", &N);
    int X[N];
    for(a=0; a<N; a++)
        scanf("%d", &X[a]);
    low=X[0];
    for(a=1; a<N; a++)
    {
        if(low>X[a])
        {
            low=X[a];
            p=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", low, p);
    return 0;
}
