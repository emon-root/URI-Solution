#include <stdio.h>

int main()
{
    int first, second, third, Max, Min, Small, temp;
    scanf("%d %d %d", &first, &second, &third);
    Max = first;
    Min = second;
    Small = third;
    if (Max < Min){
        temp = Max;
        Max = Min;
        Min = temp;
    }
    if (Min < Small){
        temp = Min;
        Min = Small;
        Small = temp;
    }
    if (Max < Min){
        temp = Max;
        Max = Min;
        Min = temp;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",Small,Min,Max,first,second,third);

    return 0;
}
