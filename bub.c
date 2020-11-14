#include <stdio.h>

int bubblesort(int x[]);
int main(void)
{
int a[]={1,4,6,5,3,7,2,8};
int s=bubblesort(a);

for(int i=0;i<8;i++)
printf("%d",a[i]);

return 0;
}

int bubblesort(int x[])
{
for(int i=0;i<8;i++)
{
for(int j=i+1;j<8;j++)
{
if(x[j]<x[i])
{
int temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
}
}