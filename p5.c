#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a = NULL;
    int size = 0, newSize, choice, i,*temp;
    while(1)
    {
         printf("\n------Dynamic Memory Allocation------\n");
         printf("1. Create a new Array\n");
         printf("2. Add elemets to the Array\n");
         printf("3. Resize the Array\n");
         printf("4. Display the Array\n");
         printf("5. Free the Array and Exit\n");
         printf("Enter Your Choice:");
         scanf("%d",&choice);
         switch(choice)
         {
              case 1:
                  if(a!=NULL)
                  {
                     printf("Array already exists!Free it and Rewrite the array!\n");
                     break;
                  }
                  printf("Enter size of Array:");
                  scanf("%d",&size);
                  if(size <= 0)
                  {
                     printf("This is Invalid\n");
                     break;
                  }
                  a = (int *)malloc(size * sizeof(int));
                  if (a == NULL) 
                  {
                      printf("Memory allocation failed.\n");
                  } 
                  else 
                  {
                      printf("Memory allocated successfully.\n");
                  }
                  break;
              case 2:
                  if(a == NULL)
                  {
                      printf("Array is not Created yet!\n");
                      break;
                  }
                  printf("\nElements of Array:");
                  for(i=0 ; i<size ; i++)
                  {
                      scanf("%d",&a[i]);
                  }
                  printf("Elements added succesfully!\n");
                  break;
              case 3:
                  if(a == NULL)
                  {
                      printf("Array is not Created yet!\n");
                      break;
                  }
                  printf("\nenter new size of New Array:");
                  scanf("%d",&newSize);
                  if (newSize <= 0)
                  {
                     printf("Invalid size!\n");
                     break;
                  }
                  temp = (int*)realloc(a,newSize * sizeof(int));
                  if(temp == NULL)
                  {
                      printf("Reallocation is Failed!\n");
                  }
                  else
                  {
                  a = temp;
                      if (newSize > size) 
                      {
                           printf("Enter %d new elements:\n", newSize - size);
                           for (i = size; i < newSize; i++) 
                           {
                                   scanf("%d", &a[i]);
                           }
                       }
                       size = newSize;
                       printf("Array resized successfully.\n");
                   }
                   break;
              case 4:
                   if (a == NULL) 
                   {
                      printf("Array not created yet.\n");
                      break;
                   }

                   printf("Array elements are:\n");
                   for (i = 0; i < size; i++)
                   {
                         printf("%d ", a[i]);
                    }
                    printf("\n");
                    break;

        case 5:
            if (a != NULL) 
            {
                free(a);
                a = NULL;
                printf("Memory freed successfully.\n");
            }
            printf("Exiting program.\n");
            return 0;
        default :
            printf("Invalid Choice!\n");
          
                  
         }
    }

return 0;
}
