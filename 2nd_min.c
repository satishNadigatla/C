#include<stdio.h>
void main()
{
int a[50],n;
printf("enter how many elements:");
scanf("%d",&n);
printf("enter %d values:",n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int min1=a[0];
int min2=a[1];
for(int i=2;i<n;i++)
{
if(a[i]<min1)
{
min2=min1;
min1=a[i];
}
else if(a[i]<min2)
min2=a[i];
}
printf("2nd minimum no %d",min2);
}
