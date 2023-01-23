#include <stdio.h>
void main()
{

    int a, b, c;
    printf("kindly choose from below option");
    printf("\npress 1 for addition");
    printf("\npress 2 for Substraction");
    printf("\npress 3 for Multiplication");
    printf("\npress 4 for Division\n");
    scanf("\n%d", &c);
    printf("\nenter value of a=");
    scanf("%d", &a);
    printf("\nenter value of b=");
    scanf("%d", &b);
    switch (c)
    {
    case 1:
        printf("\nsum is = %d", a + b);
        break;
    case 2:
        printf("\nsubstraction is = %d", a - b);
        break;
    case 3:
        printf("\nmultiplication is = %d", a * b);
        break;
    case 4:
        printf("\nDivision is = %f", (float)a / b);
        break;
    default:
        printf("\nInvalid Input!!");
        break;
    }
}