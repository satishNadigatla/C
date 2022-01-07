#include<stdio.h>
struct emp
{
int no;
char name[6];
float salary;
};
void main()
{
struct emp* ptr;
ptr=(struct emp*)malloc(sizeof(struct emp));
if(ptr==NULL)
{
printf("memory error");
}
else
{
printf("enter detils");
scanf("%d",&ptr->no);
scanf("%s",ptr->name);
scanf("%f",&ptr->salary);
printf("%d",ptr->no);
printf("%d",ptr->name);
printf("%d",ptr->salary);
}
}
