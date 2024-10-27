#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0,avr,A[3]= {20,10,30};
    for(i=0;i<3;i++)
        sum=sum+A[i];
        printf("%d",sum);
        avr = sum/3;
    printf("Avreg is = %d",avr);
    getch();
    return 0;
}