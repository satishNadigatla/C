#include<stdio.h>
void main()
{
int a[50],n;
printf("enter how many values:");
scanf("%d",&n);
printf("enter %d values:",n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int max=a[0];
for(int i=1;i<5;i++)
{
if(a[i]>max)
max=a[i];
}
printf("maximum value is :%d",max);
}
