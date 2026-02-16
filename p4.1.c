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
     else if (a>=b && a>=c)
     {
          printf("\na is the biggest number=%d",a);
     }
     else if ( b>=a && b>=c)
     {
          printf("\n b is biggest number=%d",b);
    }
    else 
    {
          printf("c is bigger: %d\n", c);
    }
      
      return 0;
}
