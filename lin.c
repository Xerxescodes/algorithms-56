#include <stdio.h>
#include <conio.h>

int linearsearch(int x[],int );
int a,flag;
int main(void)
{
int arr[]={1,4,3,5,6};
puts("input number to search");
scanf("%d",&a);

int val=linearsearch(arr,a);
getch();

return 0;
}

int linearsearch(int x[],int y){
for(int i=0;i<5;i++)
{

if(x[i]==y)
{
flag=i+1;
break;
}
else
flag=0;
}

if(flag!=0)
{
printf("item found at %d",flag);
}
else
puts("item not found");}