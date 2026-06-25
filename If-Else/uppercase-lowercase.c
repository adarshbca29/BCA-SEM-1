#include <stdio.h>

int main() {
   
 printf("TO CHECK WHETHER THE CHARACTER IS IN UPPERCASE OR LOWERCASE LETTER\n\n");
 char a;
 printf("Enter your character : ");
 scanf("%c",&a);
 if (a>='A'&& a<='Z')
 {
     printf("It is an uppercase letter");
 }
  else if (a>='a' && a<='z')
  {
      printf("It is an lowercase letter ");
  }
   else {
       printf("Invalid input ");
   }

    return 0;
}
