#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a single digit( 1 to 9):");
    scanf("%d",&digit);
    switch(digit)
    {

         case 0: printf("Zero");
           break;
         case 1: printf("One");
           break;
          case 2: printf("Two");
           break;
          case 3: printf("Three");
           break;
          case 4: printf("Four");
           break;
          case 5: printf("Five");
           break;
          case 6: printf("Six");
           break;
          case 7: printf("Seven");
           break;
          case 8: printf("Eight");
           break;
          case 9: printf("Nine");
           break;
         default: printf("Invalid digit");
    }
    return 0;

}

