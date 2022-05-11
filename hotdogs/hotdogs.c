#include <stdio.h>
#include <math.h>

int main()
{
    int H;
    int P;
    scanf("%d %d", &H, &P);

    double result;

    result = ((double)H/P);

    printf("%.2lf\n", result);
    return 0;
}