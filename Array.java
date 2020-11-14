import java.util.*;
import java.io.*;

public class Array{
public static void main(String[]args)
{
System.out.println("input number of elements for array");
Scanner x = new Scanner(System.in);
int i=x.nextInt();

int[]xer = new int[i];
System.out.println("input elements into array:");
for(int a=0;a<xer.length;a++)
{
xer[a]=x.nextInt();
}

System.out.println("minimum differnce:"+MinDiff(xer,i));
System.out.println("maximum difference:"+MaxDiff(xer,i));
}

static int MinDiff(int[]xer,int xer_size)
{
Arrays.sort(xer);

int maximum=Integer.MAX_VALUE;

for(int i=0;i<xer_size-1;i++){
if(xer[i+1]-xer[i]<maximum){
maximum=xer[i+1]-xer[i];
}
}
return maximum;}


static int MaxDiff(int[]xer,int xer_size)
{
int minimum=xer[1]-xer[0];
for(int i=0;i<xer_size;i++)
{
for(int j=0;j<xer_size;j++)
{
if(xer[j]-xer[i]>minimum)
minimum=xer[j]-xer[i];
}
}
return minimum;
}
}
