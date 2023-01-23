#include<stdio.h>
void main(){
int n,n1,n4;
printf("enter any number= ");
scanf("%d",&n);
 n4=n%10;


while(n!=0){
    n1=n%10;
    n=n/10;
}


printf("\nfirst no. is =%d",n1);
printf("\nlast no.  is =%d",n4);

printf("\nSum of first & Last Digit=%d",n1+n4);


}