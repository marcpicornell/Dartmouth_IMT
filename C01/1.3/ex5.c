#include <stdio.h>

int main(void)
{
    int matches;
    int boxes;
    scanf("%d", &matches);
    scanf("%d", &boxes);
    printf("%d\n", matches/boxes);
    printf("%d\n", matches%boxes);
}