#include<stdio.h>
void main()
{
int a[5],n;
printf("enter how many elements:");
scanf("%d",&n);
printf("enter %d values:",n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int max1=a[0];
int max2=a[1];
for(int i=2;i<n;i++)
{
if(a[i]>max1)
{
max2=max1;
max1=a[i];
}
else if(a[i]>max2)
max2=a[i];
}
printf("2nd highest no %d",max2);
}
