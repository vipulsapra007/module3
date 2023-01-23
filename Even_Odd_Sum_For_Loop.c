#include<stdio.h>
void main(){
int so1=0,i,j,k,sum=0,se1=0,even=0,odd=0;
for(i=1;i<=10;i++)
{
    printf("\nenter number = ");
    scanf("%d",&k);
if(k%2==0){
    se1=se1+k;
   
    even=even+1;
    }

    else if(k%2!=0)
    {
   so1=so1+k;
   odd=odd+1;
    }
    
    sum=sum+k;
    

}
printf("\n sum is =%d",sum);
printf("\n There Are %d Even Number",even);
printf("\n There Are %d Odd Number",odd);

printf("\n sum of even number=%d",se1);
printf("\n sum of Odd number=%d",so1);

}

