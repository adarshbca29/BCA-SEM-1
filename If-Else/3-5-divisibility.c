// Online C compiler to run C program online
#include <stdio.h>

int main() {

    printf("To check whether the integer input in divisible by 5 and 3 \n\n");
    int n ;
    printf("Enter the no : ");
    scanf("%d",&n);
    if (n%3==0 && n%5==0)
    {
        printf("The number is divisible by 3 and 5 ");
        
    }
    else if (n%3==0 && n%5!=0)
    {
        printf("The number is  divisible by 3 but it is not divisible by 5");
    }
    else if (n%3!=0 && n%5==0)
    {
        printf("The number is not divisible by 3 but it is  divisible by 5");
    }
    else if (n%3!=0 && n%5!=0)
    {
        printf("The number is not divisible by 3 and 5");
    }

    return 0;
}
