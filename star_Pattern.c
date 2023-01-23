#include<stdio.h>
void main(){
int i,j,k;
for(i=1;i<=5;i++)//Rows..
{
    for(j=5;j>i;j--)//Left Space
    {
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++)//Right space & *
    {
        printf("*");
    }
    printf("\n");
}
}