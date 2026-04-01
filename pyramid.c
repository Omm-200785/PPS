#include <stdio.h>
int main() 
{
    int n = 10,i,j;
    for(i=0; i<n; i++)
    {
        for(j=i-1; j>=1; j--)
        {
            printf("%d",j);
        }
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    return 0;
}


    
