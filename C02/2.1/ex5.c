#include <stdio.h>

int main(void)
{

    /* Declarations */
    int height,
        leaflets;

    /* Input */

    scanf("%d", &height);
    scanf("%d", &leaflets);

    /* Logic */
    int Tinuviel   = height <= 5  &&    leaflets >= 8;
    int Calaelen   = height >= 10 &&    leaflets >= 10;
    int Falarion   = height <= 8  &&    leaflets <= 5;
    int Dorthonion = height >= 12 &&    leaflets <= 7;

    if(Tinuviel){
        printf("Tinuviel");
    }
    else if (Calaelen){
        printf("Calaelen");
    }
    else if (Falarion){
        printf("Falarion");
    }
    else if (Dorthonion){
        printf("Dorthonion");
    }
    else {
        printf("Uncertain");
    }

    return 0;
}
