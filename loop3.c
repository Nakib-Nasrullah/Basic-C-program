#include<stdio.h>
#include<conio.h>
int main()
{
 int e;
for(e=2;e<=100;e=e+2)
{printf("%d",e);
if (e<100)
{
    printf(",");
}
}
getch();
return 0;
}