// Metric to imperial

#include <stdio.h>
#include <math.h>

double mtoft(double x);
double gtolbs(double x);
double ctof(double x);


int main(void)
{
    double  value,
            converted;
    char    unit;
    int     conversion;

    scanf("%i", &conversion);
    for (int i = 0; i < conversion; i++)
    {
    
        scanf("%lf %c", &value, &unit);

        if (unit=='c')
        {
            converted = ctof(value);
            printf("%2.6lf f\n", converted);   
        }
        else if (unit=='g')
        {
            converted = gtolbs(value);
            printf("%2.6lf lbs\n", converted);
        }
        else if (unit=='m')
        {
            converted = mtoft(value);
            printf("%2.6lf ft\n", converted);
        }
        
    }

    return 0;

}


double ctof(double x)
{
    return((9.0/5)*x+32);
}

double gtolbs(double x)
{
    return(x*0.002205);
}

double mtoft(double x)
{
    return(x*3.2808);
}
