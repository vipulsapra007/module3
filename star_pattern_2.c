#include<stdio.h>
void main(){

   int  i, k;
 
    
 
    for ( i = 1 ; i <= 6 ; i++)
    {
        printf(" ");
        for ( k = 1 ; k <= i ; k++ )
            printf("*");
 
        printf("\n");
    }
 
    for ( i = 6 - 2 ; i >= 0 ; i-- )
    {
        printf(" ");
        for ( k = i ; k >= 0 ; k-- )
            printf("*");
 
        printf("\n");
    }

    
}