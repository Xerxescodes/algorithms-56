#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int recursearch(int a[],int i,int b);
int x;

int main(void)
{
system("cls");
int arr[11]={1,3,4,5,6,7,2,11,13,16};

puts("input number to search");
scanf("%d",&x);

int a=recursearch(arr,arr[0],x);
printf("No:%d\tPosition:%d",x,a);

return 0;
}

int recursearch(int a[],int i,int b)
{
if(i>10)
{
return -1;
}
else if(a[i]==b)
{
return i;
}
else
{
return recursearch(a,i+1,b);
}}

