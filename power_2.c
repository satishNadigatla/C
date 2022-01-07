#include<stdio.h>
void main()
{
int x;
printf("enter the number:");
scanf("%d",&x);
if(x & x-1)
printf("no power of 2");
else
printf("yes it is power of 2");
}
