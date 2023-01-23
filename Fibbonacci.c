#include<stdio.h>
void main(){
    /*fibbo : a=1 b=1 2 3 4 5 8
    
    a=b  2 
    b=c  3
    c=a+b 5
    */
    int a=1,b=1,c,n ;
    printf("enter a = ");
    scanf("%d",&n);
    
     
for(int i=1;i<=n;i++)
   { 
    a=b;
    b=c;
    c=a+b;
    printf("%d ",c);
    }
// printf("Final output of fibbo =%d",c);

    }