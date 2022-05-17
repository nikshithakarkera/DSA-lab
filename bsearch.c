#1.Binary Search.

#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[20],key,n,i,mid,low=0,high;
printf("\n enter the value for n:");
scanf("%d",&n);
printf("enter the array values:\n");
for(i=0;i<n;i++)
scanff("d",a[i]);                                                                                                                                                                                                                 
printf("\n enter the search element:");
scanf("%d",&key);
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("\n array found at location %d",mid+1);
exit(0);
}
else if(key>a[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
}
printf("\n search element is not found");
}
