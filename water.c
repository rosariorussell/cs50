#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many minutes was your shower?\n");
    int minutes = GetInt();
    int bottles = minutes * 12;
    printf("%d bottles\n", bottles);
}