#include <stdio.h>
#include <string.h>

int main(void) 
    {
        char word[50];

        int word_half,
            index,
            found;

        found = -1;
        index = 0;

        scanf("%s", word);

        word_half = strlen(word) / 2;
        
        if(strlen(word) % 2) word_half = word_half+1;

        while (word[index]!='\0')
        {
            if((word[index] == 'T' || word[index] == 't') && (index < word_half)) found = 1;

            if((word[index] == 'T' || word[index] == 't') && (index > word_half)) found = 2;
            
            index++;

        }

        printf("%i", found);
        return 0;
    }