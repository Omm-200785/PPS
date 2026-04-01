#include <stdio.h>
int main() 
{
    int n = 10,i,j;
    for(i = n; i >= 1; i--) 
    {
        for(j = n; j > i; j--)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        for(j = i - 1; j >= 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
