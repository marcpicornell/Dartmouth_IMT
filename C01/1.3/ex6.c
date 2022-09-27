#include <stdio.h>

int main(void)
{
    int number_of_grades;
    int grade;
    int total = 0;
    int counter;
    double conv;
    
    scanf("%d", &number_of_grades);
    
    for(counter=number_of_grades;counter>0;counter--)
    {
        scanf("%d", &grade);
        total = total + grade;
    }
    
    conv = (double) total;
    printf("%.2lf", conv/number_of_grades);
}