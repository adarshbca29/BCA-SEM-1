#include <stdio.h>
int main()
{
    printf("To state whether the year is leap year or not \n\n");
    int n;
     printf("Enter the year : ");
     scanf("%d",&n);
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
     {
         printf("It is a leap year ");
     }
      else 
      {
          printf("It is not a leap year ");
      }
    
    
    return 0;
}
