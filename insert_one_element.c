#include<stdio.h>
void main()
{
int a[50],key,loc,i,n,m;
printf("enter no of elements");
scanf("%d",&n);
printf("%d values are:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf(" %d,",a[i]);
//insert a new element
printf("enter new elements:");
scanf("%d",&key);
printf("enter the location:");
scanf("%d",&loc);
for(i=n;i>=loc;i--)
a[i+1]=a[i];
a[loc]=key;
for(i=0;i<n+1;i++)
{
printf("%d,",a[i]);
}
}
