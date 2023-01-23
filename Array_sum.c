/*Array : Store more than one value in a single variable of similar type 
int : a=1 2 3
 array starts with 0 always
 value stored in array : index-1
  types of array
  1> 1 D    for loop
  2> 2 D    for(){
        for(){

            }
        }
        
  } */


#include<stdio.h>
void main(){
//     // int a[5]={1,2,3,4,5};                     //1 Dimesnion array
//     // for (int i=0;i<5;i++)
//     //   //a[i]=i;
//     //     printf("\n%d ", a[i]);
//     // }
    

// int a[2][3]={{1,2,3},{4,5,6}};
//   //Row  //column  
// for (int i=0;i<2 ;i++)                          //2 dimesnion array
// {
//     for(int j=0 ;j<3 ;j++)
//     {
//         printf("\t%d",a[i][j]);
//     }
//     printf("\n");
// }

// }


///For value asking from user


// int a[5];                     //1 Dimesnion array
//     for (int i=0;i<4;i++){
//       printf("enter Value =");
//         scanf("\n%d ", &a[i]);
//     }
//     for (int i=4;i>=0;i--){
//         a[i]=i;
//       printf("%d",a[i]);
//        } 


int a[2][3];
int b[2][3];
int c[2][3];
//   //Row  //column  
for (int i=0;i<2 ;i++)                          //2 dimesnion array
{
    for(int j=0 ;j<3 ;j++)
    {
        printf("\nenter Value = ");
            scanf("%d",&a[i][j]);
    }
      }
for (int i=0;i<2 ;i++)                          //2 dimesnion array
{
    for(int j=0 ;j<3 ;j++)
    {
        printf("\nenter Value = ");
            scanf("%d",&b[i][j]);
    }
}
for (int i=0;i<2 ;i++)                          //2 dimesnion array
{
    for(int j=0 ;j<3 ;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("\n" );
            
    }
}
for (int i=0;i<2 ;i++)                          //2 dimesnion array
{
    for(int j=0 ;j<3 ;j++)
    {
       
        printf("\t%d", c[i][j]);

}
printf("\n");

}
}




