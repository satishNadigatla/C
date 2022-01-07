#include<stdio.h>
void main()
{
int a[5],n;
printf("enter how many elements:");
scanf("%d",&n);
printf("enter %d values:",n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int min=a[0];
for(int i=1;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
printf("minimum value is :%d",min);
}
