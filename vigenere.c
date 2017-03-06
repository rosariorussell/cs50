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
    
    int keylength = strlen(argv[1]);
    
    for (int i = 0; i < keylength; i++)
    {
        if(isalpha(argv[1][i]==false))
        {
            printf("Only letters!\n");
            return 1;
        }
    }
    
    string password = argv[1];
    string code = GetString();

    for (int i = 0, j = 0, n=strlen(code); i < n; i++, j++)
    {
        string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string lowercase = "abcdefghijklmnopqrstuvwxyz";
        
        int cipher = 0;
        if (j >=strlen(password))
        {
            j = 0;
        }
        
        if (isalpha(code[i]))
        {
            if(isupper(code[j]))
            {
                cipher = password[j] -65;
            }
            else if (islower(code[j]))
            {
                cipher = password[j] -97;
            }


            if (isupper(code[i]))
            {
                int digit = ((code[i]-65) + cipher) % 26;
                printf("%c", uppercase[digit]);
            }
            if (islower(code[i]))
            {
                int digit = ((code[i]-97) + cipher) % 26;
                printf("%c", lowercase[digit]);
            }
            
        }
        else
        {
            int digit = code[i];
            printf("%c", digit);
            j--;
        }
    }
    printf("\n");
}