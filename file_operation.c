#include<stdio.h>
#include<ctype.h>
int main() 
{
    FILE *fp;
    char filename[100];
    char ch;
    int lines = 0, words = 0, tabs = 0, characters = 0;
    int inWord = 0;
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) 
    {
        printf("Cannot open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) 
    {
        characters++;
        if (ch == '\n')
        {
            lines++;
        }
        if (ch == '\t')
        {
            tabs++;
        }
        if (isspace(ch)) 
        {
            inWord = 0;
        } 
        else if (inWord == 0) 
        {
            inWord = 1;
            words++;
        }
     }
     fclose(fp);
     printf("Total Characters: %d\n", characters);
     printf("Total Words : %d\n", words);
     printf("Total Lines : %d\n", lines);
     printf("Total Tabs : %d\n", tabs);
     return 0;
}
