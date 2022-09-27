#include <stdio.h>

int main(void)
{
    int i;
    int table;
    int multiplication_value = 0;
    scanf("%d", &table);
    for( i = 0 ; i < 11 ; i++ )
    {
        multiplication_value = table * i;
        printf("%dx%d = %d\n", i, table, multiplication_value);
    }
}