#include <stdio.h>

int main()
{

    int age;
    int days;
    int months;
    int years;

    years = months = days = 0;
    scanf("%d", &age);

    while (age > 365)
    {
        years += 1;
        age -= 365;
    }
    while (age < 365 && age >= 30)
    {
        months += 1;
        age -= 30;
    }
    if (age <= 30)
    {
        days += age;
    }

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    return 0;
}