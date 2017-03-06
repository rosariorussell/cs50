#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please retry\n");
        return 1;
    }
    
    int k = atoi(argv[1]) % 26;
    
    string code = GetString();
    
    for (int i = 0, n=strlen(code); i < n; i++)
    {
        if (isalpha(code[i]))
        {
            if(islower(code[i]))
            {
                char digit = ((code[i] - 'a' + k) % 26)+ 'a';
                printf("%c", digit);
                
            }
            else if(isupper(code[i]))
            {
                char digit = ((code[i] - 'A' + k) % 26) + 'A';
                printf("%c", digit);
            }
        }
        else
        {
            printf("%c", code[i]);
        }
    }
    printf("\n");

}