#include <stdio.h>

int main() {
    printf("Percentage to Grades \n\n");
    printf("FORMAT\n MORE THAN 80 - A \n MORE THAN 60 - B \n MORE THAN 40 - C \n LESS THAN 40 - D\n\n\n" );
    float n ;
    printf("Enter your percentage : ");
    scanf("%f",&n);
    if (n > 80) 
{
    printf("A");
}
else if (n > 60 && n <= 80) 
{
    printf("B");
}
else if (n > 40 && n <= 60) 
{
    printf("C");
}
else 
{
    printf("D");
}
    
