#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;
    do
    {
    printf("Height: ");
    height = GetInt();
    }
    while (height < 0 || height > 23);
    
    for(int pyramid = 0; pyramid < height; pyramid++)
    {
        for(int spaces=0; spaces < height-pyramid-1; spaces++)
        {
            printf(" ");
        }
        for(int hashes = 0; hashes < pyramid+2; hashes++)
        {
        printf("#");
        }
        printf("\n");
    }
    
}