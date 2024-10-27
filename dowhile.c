#include<stdio.h>
#include<conio.h>
int main(){
    int e,s=0;
    e=2;
    do{
        s = s+e;
        e = e+2;
    }
    while(e<=6);
    printf("The sum is = %d",s);
    getch();
    return 0;
}