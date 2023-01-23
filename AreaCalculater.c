#include<stdio.h>
void main(){
int Radius,Length,Width,Base,Height,Shape,side;
printf("\nPress 1 for Area of Circle");
printf("\nPress 2 for Area of Square");
printf("\nPress 3 for Area of Rectangle");
printf("\nPress 4 for Area of Triangle\n");

printf("\nKindly Choose From Above Option =");
scanf("\n%d",&Shape);

if(Shape<1||Shape>4)
{
    printf("\nInvalid Choice");
}

if(Shape==1)
{
    printf("enter Value of Radius=");
    scanf("%d",&Radius);
    printf("Area Of Circle =%f",(float)3.14*Radius*Radius);
}
if(Shape==2)
{
printf("\nenter Value of side = ");
scanf("%d",&side);
printf("\nArea of Square is =%d",side*side);

}


if(Shape==3)
{
printf("\nenter Value of Length = ");
scanf("%d",&Length);
printf("\nenter Value of width = ");
scanf("%d",&Width);
printf("\nArea of Rectangle is =%d",Length*Width);

}

if(Shape==4)
{
printf("\nenter Value of Base = ");
scanf("%d",&Base);
printf("enter Value of Height = ");
scanf("%d",&Height);
printf("\nArea of Rectangle is =%f",(float).5*Height*Base);

}
}