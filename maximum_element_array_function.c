#include <stdio.h>
int max_no(int a[], int n)
{
    int i, j, max=0 ;

    for (i = 0; i < 5; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }
    }

return max;
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value of number=");
        scanf("%d", &a[i]);
    }
    printf("\nThe maximum number in the array is: %d", max_no(a, 5));
}