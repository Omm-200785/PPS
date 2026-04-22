#include<stdio.h>
#include<string.h>
#define MAX 100
struct HULAHU
{
   int roll_no;
   char Name[100];
   float marks;
   char grade;
};
int main()
{
   int n,i;
   printf("Enter No. of Student:\n");
   scanf("%d",&n);
   struct HULAHU s[n];
   for(i=0;i<n;i++)
   {
      printf("\nEnter student details %d\n",i+1);
      printf("Enter name of HULAHU:");
      //fgets(s[i].Name,100,stdin);
      scanf("\n%[^\n]",s[i].Name);
      printf("Enter Roll No. of HULAHU:\n");
      scanf("%d",&s[i].roll_no);
      printf("Enter marks & grade of HULAHU:\n");
      scanf("%f",&s[i].marks);
      //scanf("%f %c",&s[i].marks,&s[i].grade);
      printf("\nEnter Grades of HULAHU:");
      scanf("\n%c",&s[i].grade);
   }
   printf("\n-----HULAHU Records-----\n");
   for(i=0;i<n;i++)
   {
      printf("\nHULAHU %d:\n",i+1);
      printf("Name of HULAHU:%s\n",s[i].Name);
      printf("Roll Number of HULAHU:%d\n",s[i].roll_no);
      printf("Marks of HULAHU:%.2f\n",s[i].marks);
      printf("Grades of HULAHU:%c\n",s[i].grade);
   }
   return 0;
}
   
