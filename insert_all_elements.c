#include<stdio.h>
void main()
{
int i,n,m,loc;
int a[50],b[10];
printf("how many values in a[]:");
scanf("%d",&n);
printf("%d values are :",n);
for(i=0;i<n;i++)
scanf("%d", &a[i]);
printf("how many values in b[]:");
scanf("%d",&m);
printf("%d values are :",m);
for(i=0;i<m;i++)
scanf("%d", &b[i]);
printf("enter location to insert:");
scanf("%d",&loc);
for(i=n-1;i>=loc;i--)
a[i+m]=a[i];
for(i=0;i<m;i++)
a[loc+i]=b[i];
for(i=0;i<m+n;i++)
printf("%d,",a[i]);
}
