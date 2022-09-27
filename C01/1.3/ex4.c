#include <stdio.h>

int main(void)
{
    double temperature;
    scanf("%lf", &temperature);
    printf("%.1lf", temperature * 9.0 / 5.0 + 32.0);
}