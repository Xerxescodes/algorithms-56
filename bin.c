#include <stdio.h>

int binarysearch(int a[],int beg,int end,int x);
int a;

#define VAL 5
int arr[VAL];
int main(void)
{
int value=-1;


puts("input values in array in order");

for(int i=0;i<VAL;i++)
{
scanf("%d",&arr[i]);
}

puts("input number to search");
scanf("%d",&a);

value=binarysearch(arr,0,arr[VAL-1],a);

if(value!=-1)
{
printf("value found at %d",value);
}
else
{
printf("value not found");
}}

int binarysearch(int a[],int beg,int end,int x)
{
int mid;
if(end>=beg)
{
mid=(beg+end)/2;

if(a[mid]==x)
{
return mid+1;
}
else if(a[mid]<x)
{
return binarysearch(a,mid+1,end,x);
}
else
{
return binarysearch(a,beg,mid-1,x);
}
}
return -1;
}