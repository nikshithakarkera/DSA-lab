#include<stdio.h>
int a[10],n,i,j,temp,min;
void slsort()
{
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
if(a[min]<a[j])
min=j;
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
printf("selection sort is:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
void main()
{
printf("enter the number of element:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
slsort();
}

