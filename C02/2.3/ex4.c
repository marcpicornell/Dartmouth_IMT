#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char    word[101];

    int     number_of_words = 0,
            length = 0,
            longer = 0,
            index;

    scanf("%d", &number_of_words);

    for(index=0;index<number_of_words;index++)
    {
            scanf("%s", word);
            length = strlen(word);

            if(length>=longer)
            {
                longer = length;
            }


    }

    printf("%d", longer);


    return 0;
}
