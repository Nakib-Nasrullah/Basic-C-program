#include<stdio.h>
#include<conio.h>
int main(){
    float c,f;
    printf("Enter temperature : ");
    scanf("%f",&c);
    f = (9*c)/5 + 32;
    printf("your temperature is : %f",f);
    getch();
}
