#include <stdio.h>
void main()
{
    int a[5], i, sum = 0;
    printf("enter array elements= \n");
    for (i = 0; i < 5; i++)
    {
        scanf("\n%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("sum is %d", sum);
}