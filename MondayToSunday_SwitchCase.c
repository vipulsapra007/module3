#include<stdio.h>
void main(){
int d;
printf("Enter Day = ");
scanf("%d",&d);
switch(d)
{
    case 1:
    printf("its Monday");
    break;
    case 2:
    printf("Its Tuesday");
    break;
    case 3:
    printf("its Wednesday");
    break;
    case 4:
    printf("Its Thursday");
    break;
    case 5:
    printf("its Friday");
    break;
    case 6:
    printf("Its Saturday");
    break;
    case 7:
    printf("its Sunday");
    break;
    default :
    printf("Invalid");
    break;
}
}