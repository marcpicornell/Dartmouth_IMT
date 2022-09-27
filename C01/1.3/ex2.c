#include <stdio.h>

int main(void)
{
    int row = 0;
    int col_a = 4;
    int col_b = 1;
    int i, j, k;

    char symbol;
    
    scanf("%c", &symbol);

    while (row < 5)
    {   
        for (i = 0; i < col_a; i++)
        {
            printf("+");
        }
        
        for (j = 0; j < col_b; j++)
        {
            printf("%c", symbol);
        }

        for (k = 0; k < col_a; k++)
        {
            printf("+");
        }
        printf("\n");
        row++;
        col_a = col_a -1;
        col_b = col_b +2;
    }
    
    return 0;
}