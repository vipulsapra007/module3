#include<stdio.h>
void main(){
    printf("\nLEts Find Out Simple Interest");
    int p,i,n,r;
    printf("\nEnter Principle AMount=");
    scanf("%d",&p);
    printf("\nEnter Time in Years=");
    scanf("%d",&n);
    printf("\nEnter Rate of Interest");
    scanf("%d",&r);

    i=p*r*n*.01;
    printf("\nInterest is =%f",(float)i);



}