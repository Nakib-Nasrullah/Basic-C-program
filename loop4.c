#include<stdio.h>
#include<conio.h>
int main(){
    int e;
    for(e=2;e<=20;e+=2)
    {
        printf("%d",e);
        if(e<20){
            printf(",");
        }
     }
getch();
return 0;
}