#include <stdio.h>
void main()
{
    int n, r, sum = 0;
    printf("enter number= ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("\nsum of digits is = %d", sum);
}