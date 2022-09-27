#include <stdio.h>

int main(void)
{
    int i;
    int multiplication_value = 0;
    for( i = 0 ; i < 11 ; i++ )
    {
        multiplication_value = 8 * i;
        printf("%dx%d = %d\n", i, 8, multiplication_value);
    }
}