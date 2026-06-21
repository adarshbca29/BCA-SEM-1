#include <stdio.h>
int main()
{
    printf("To state whether the given number is odd or even \n\n");
    int n;
    printf("Enter you number : ");
    scanf("%d",&n);
    if ( n%2==0)
    {
        printf("The number is even ");
        
    }
    else 
    {
        printf("The number is odd");
    }
    return 0;
}
