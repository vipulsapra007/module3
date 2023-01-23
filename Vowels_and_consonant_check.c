#include<stdio.h>
void main(){
char ch;
printf("Enter Chracter = ");
scanf("%c",&ch);

switch(ch)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("Its vovwel");
    break;

    default:
    printf("consonant!!!");
    break;

}
}