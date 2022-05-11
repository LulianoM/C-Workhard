#include <stdio.h>
#include <math.h>

int main()
{   
    int n;
    scanf("%d", &n);


    double P;
    double M;

    P = n/log(n);
    M = 1.25506 * P;


    printf("%.1lf %.1lf\n", P, M);
    return 0;
}