#include<stdio.h>
void main(){
int Days,Year,T1;
printf("press 1 for day to year conversation");
printf("\npress 2 for year to day conversation ");
scanf("%d",&T1);
if(T1==1)
{
printf("Enter Days=");
scanf("%d",&Days);
printf("Years =%f",(float)Days/365);
}
if(T1==2)
{
printf("Enter Years=");
scanf("%d",&Year);
printf("Years =%d",Year*365);
}
if(T1>2||T1<1)
printf("Invalid Entry");


}