#include<stdio.h>
void main(){
    int a,b,c;
    printf("\npress 1 for sum");
    printf("\npress 2 for substraction");
    printf("\npress 3 for Multiplication");
    printf("\npress 4 for Div");
    printf("\npress 5 for MOdulo");
     printf("\nWhat Do you want =");
    scanf("%d",&c);
       if(c>5||c<1)
    printf("\nInvalid Choice");
 
    if(c==1)//For Addition
    {printf ("enter Value of a =");
   scanf("%d",&a);
   printf ("enter Value of b=");
   scanf("%d",&b);
    printf("\na+b=%d",a+b);
    }
   if(c==2)//For Substraction
  {printf ("enter Value of a =");
   scanf("%d",&a);
   printf ("enter Value of b=");
   scanf("%d",&b);
    printf("\na-b=%d",a-b);
  }
     if(c==3)//For Multiplication
     {
     printf ("enter Value of a =");
   scanf("%d",&a);
   printf ("enter Value of b=");
   scanf("%d",&b);
    printf("\na*b=%d",a*b);

}
 
   if(c==4)//For Division
{
    printf ("enter Value of a =");
   scanf("%d",&a);
   printf ("enter Value of b=");
   scanf("%d",&b);
     printf("\na/b=%f",(float)a/b);
}

if(c==5)//for Modulo
{
  printf ("enter Value of a =");
   scanf("%d",&a);
   printf ("enter Value of b=");
   scanf("%d",&b);
     printf("\na modulo b=%d",a%b);
}


    

}