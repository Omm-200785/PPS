#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp, *oddfile, *evenfile;
    int num;
    fp = fopen("data","r");
    if (fp == NULL)
    {
        printf("ERROR in opening file data\n");
        return 1;
    }
    oddfile = fopen("odd","w");
    evenfile = fopen("even","w");
    if (oddfile == NULL || evenfile == NULL)
    {
        printf("Error creating output files\n");
        fclose(fp);
        return 1;
    }
    while (fscanf(fp, "%d", &num) != EOF)
    {
        if (num%2 == 0)
        {
            fprintf(evenfile, "%d\n", num);
        }
        else
        {
            fprintf(oddfile, "%d\n", num);
        }
    }
    fclose(fp);
    fclose(oddfile);
    fclose(evenfile);
    
    printf("\nOdd Numbers:");
    oddfile = fopen("odd","r");
    while (fscanf(oddfile, "%d", &num) != EOF)
    {
       printf("%d\n", num);
    }
    fclose(oddfile);
    
     printf("\nEven Numbers:");
     evenfile = fopen("even","r");
    while (fscanf(evenfile, "%d", &num) != EOF)
    {
       printf("%d\n", num);
    }
    fclose(evenfile);
    return 0;
}
