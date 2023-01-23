#include<stdio.h>
void main(){
    int a,b;

printf("\nEnter Value of a=");
scanf("%d",&a);
printf("\nEnter Value of b=");
scanf("%d",&b);

a=a+b;//a=20,b=10....a=20+10....Now a=30
b=a-b;//b=30-10=20....b=20(done)
a=a-b;//a=30-20=10....a=10(done)

printf("after Swapping a=%d and b=%d",a,b);


}