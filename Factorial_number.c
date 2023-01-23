#include<stdio.h>
void main(){
int n,i,fact=1;
printf("Foctorial Number up to Which number = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact = fact*i;
}
printf("factorial is = %d",fact);
}