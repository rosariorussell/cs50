#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = GetString();
    if (name[0] >= 'A' && name[0] <='Z')
    {
        printf("%c", name [0]);
    }
    if (name[0] >= 'a' && name[0] <='z')
    {
        printf("%c", name [0] - 'a' + 'A');
    }
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            if (name[i+1] >= 'A' && name[i+1] <='Z')
            {
                printf("%c", name [i+1]);
            }
            if (name[i+1] >= 'a' && name[i+1] <='z')
            {
                printf("%c", name [i+1] - 'a' + 'A');
            }
            
        }
    }
    printf("\n");
}