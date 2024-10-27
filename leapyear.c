#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,y;
    printf("Enter year : ");
    scanf("%d",&y);
    if(y>0)
    a=y%4;
    b=y%100;
    c=y%400;
    if(((a==0)&&(b!=0))||(c==0))
    {
        printf("Leap Year");
    }
    else
    printf("Not Leap Year");
    getch();
    return 0;
}