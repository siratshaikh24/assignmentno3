#include<stdio.h>
int main()
{
    int choice;
    float radius,PI;
    printf("Enter radius: ");
    scanf("%f",&radius);

    printf("\nMenu:\n");
    printf("1. Area of Circle\n");
    printf("2. Circumference of circle\n");
    printf("3. Volume of sphere");


    printf("Enter your choice");
    scanf("%d",&choice);

    switch(choice)
    {
    

    case 1: printf("Area of circle =%.2f", PI * radius * radius);
    break;

    case 2: printf("Circumference of circle =%.2f", PI * radius * radius);
    break;

    case 3: printf("Volume of circle =%.2f", PI * radius * radius);
    break;

    default: printf("Invalid choice");
}
    return 0;

}
