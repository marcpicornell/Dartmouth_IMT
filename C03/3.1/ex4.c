#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int sumOfDigits(int);

int main(int argc, char const *argv[])
{
    int digits;
    int total;
    
    scanf("%i", &digits);
    total = sumOfDigits(digits);
    
    printf("%i", total);

    return 0;
}

int sumOfDigits(int a)
{
    int numbers[100] = a;
    
    return 0;    
}