#include<stdio.h>
void main()
{
int a[20],temp[20],i=0,j=0,n;
printf("enter how many variables :");
scanf("%d",&n);
printf("enter array %d variables:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i] != a[i+1])
{
temp[j]=a[i];
j++;
}
}
//temp[j++] = a[n];
for(i=0;i<j;i++)
printf("%d",temp[i]);
}
