#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    double part1;
    double part2;
    part1 = (1 + sqrt(5)) /2 ;
    part2 = (1 - sqrt(5)) /2 ;

    
    double result;
    result = (pow(part1,n) - pow(part2,n))/sqrt(5);
    

    printf("%.1lf\n", result);
    return 0;
}