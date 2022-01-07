#include<stdio.h>
void main()
{
int x=0x12345678;
x=(x<<24 & 0xff000000) | (x<<0 & 0x00ff0000) | (x>>0 & 0x0000ff00) | (x>>24 & 0x000000ff);
printf("%d",x);
}
