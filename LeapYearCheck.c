#include<stdio.h>
void main(){
    int y;
    printf("LEts Find Leap Year Or Not");
    printf("\nEnter Year =");
    scanf("%d",&y);
    if(((y % 4 ==0 ) && (y % 100!=0)) ||(y%400 ==0))
    printf("Its Leap Year");
    else
    printf("its NOt Leap Year");
}