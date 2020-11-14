#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int reduce(int);
int a;

int main(void)
{
system("cls");
puts("enter number to reduce to the smallest");
scanf("%d",&a);

printf("\nstarting reduction..\n");
int v=reduce(a);

getch();


return 0;
}

int reduce(int x)
{
if(x>=0)
{
reduce(x-1);
}
printf("%d\n",x);
}