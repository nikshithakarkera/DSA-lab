#include<stdio.h>
int a[10],i,j,n,temp;
void bubblesort(int[],int);
int main()
{

printf("Enter the number of element:\n");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubblesort(a,n);
return 0;
}
void bubblesort(int a[],int n)
{
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted element is:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
