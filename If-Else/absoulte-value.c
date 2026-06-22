#include <stdio.h>

int main() {
 
    printf("TO PRINT THE ABSOLUTE VALUE OF INTEGER \n\n");
    int n;
    printf("Enter your no : ");
    scanf("%d",&n);
    if (n<0)
    {
        int a = n*-1;
        printf("The absolute value is : %d",a);
    }
    else 
    {
        printf("The absoulute value is : %d",n);
    }

    return 0;
}
