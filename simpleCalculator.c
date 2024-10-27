#include<stdio.h>
#include<conio.h>
int main(){
    float x,y,z;
    printf("Enter first number :");
    scanf("%f",&x);
    printf("Enter second number :");
    scanf("%f",&y);
    if(y!=0)
    {

        z=x/y;
        printf("%f",z);
    }
    else
    printf("Math error");
    getch();
    return 0;
}