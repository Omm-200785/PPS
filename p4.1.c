#include<stdio.h>
int main()
{
     int a,b,c;
     printf("\n true false statement:");
     scanf("%d %d %d",&a,&b,&c);
     if (a==b && b==c)
     {
         printf("three numbers are same=%d",a=b=c);
     }
     else if (a>b && a>c)
     {
          printf("\na is the biggest number=%d",a);
     }
     else if ( b>a && b>c)
     {
          printf("\n b is biggest number=%d",b);
     }
     if (a==b && b!=c)
     {
          printf("\na and b is same=%d",a=b);
      }
      else if (a>b && a>c)
     {
          printf("\na is the biggest number=%d",a);
     }
     else if ( b>a && b>c)
     {
          printf("\n b is biggest number=%d",b);
     }
     if (a!=b && b==c)
     {
          printf("\nb and c is same=%d",b=c);
      }
      else if (a>b && a>c)
     {
          printf("\na is the biggest number=%d",a);
     }
     else if ( b>a && b>c)
     {
          printf("\n b is biggest number=%d",b);
     }
     else if (c>a && c>b)
           printf("\nc is the biggest number=%d",c);
      
      return 0;
}
