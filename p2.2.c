#include<stdio.h>
int main()
{
      float Maths;
      float PPS;
      float ETC;
      float EGD;
      float FAI;
      float percentage;
      float total_marks = 350;
      printf("*********************Student Marksheet*******************\n");
      printf("Enter the marks of Maths:\n");
      scanf("%f",&Maths);
      printf("Enter the marks of PPS:\n");
      scanf("%f", &PPS);
      printf("Enter the marks of ETC:\n");
      scanf("%f",&ETC);
      printf("Enter the marks of EGD:\n");
      scanf("%f",&EGD);
      printf("Enter the marks of FAI:\n");
      scanf("%f",&FAI);
      float  obtain_marks = Maths + PPS + ETC + EGD + FAI;
      printf("Obtained marks:%f\n",obtain_marks);
      printf("Percentage obtained:%f\n", obtain_marks/total_marks*100);
      percentage= obtain_marks/total_marks*100;
      if (percentage >= 90)
      {
           printf("Grade is A:\n");
      }
      else if (percentage >= 75)
      {
           printf("Grade is B:\n");
      }
      else if (percentage >= 60)
      {
           printf("Grade is c:\n");
      }
      else if (percentage >= 40)
      {
           printf("Grade is D:\n");
      }
      else if (percentage <= 30)
      {
           printf("Student has Failed the exam");
      }
      
        
}
