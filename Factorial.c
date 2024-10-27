#include<stdio.h>
#include<conio.h>
int main(){
    int e,p=1,n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>=0)
    {
        for(e=1;e<=n;e++)
        p=p*e;
    printf("%d",p);
    }
    else
    printf("Math error");
    getch();
    return 0;
}