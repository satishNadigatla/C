#include<stdio.h>
void main()
{

}
void reverse(char *str)
{
char *start;
char *end;
char ch;
char *s2=str;
while(*s2 != '\0')
{
count++;
s2++;
}
start=str;
end = str + count-1;
while(start<end)
{
ch=*start;
*start = * end;
*end = ch;
start++;
end--;
}
}

