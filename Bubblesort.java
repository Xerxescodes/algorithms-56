public class Bubblesort
{
public static void main(String[]args)
{
int[]arr={1,3,4,8,7,6,9,5,2,100};
Bubblesort.sort(arr);

for(int xer:arr)
{
System.out.println(xer+" ");
}
}

public static void sort(int[]arr)
{
for(int i=0;i<arr.length;i++)
{
for(int j=0;j<arr.length-i-1;j++)
{
if(arr[j]>arr[j+1])
{
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}}
}}