#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* link;
};
struct node* root=NULL;
int len,ch;
void append(void);
void addDataBegin(void);
void addDataAfter(void);
int length(void);
void display(void);
void delete(void);
void find_middle_node(void);
void reverse(void);
void main()
{
while(1)
{
printf("single linkd list operations:\n");
printf("1.append:\n");
printf("2.add data begining:\n");
printf("3.add data after:\n");
printf("4.length:\n");
printf("5.display:\n");
printf("6.delete:\n");
printf("7.find_middle_node:\n");
printf("8.reverse:\n");
printf("9.quit:\n \n");
printf("enter your choice:\n");
scanf("%d",&ch);

switch(ch)
{
case 1:append();
       break;
case 2:addDataBegin();
       break;
case 3:addDataAfter();
       break;
case 4:len = length();
       printf("length is %d \n",len);
       break;
case 5:display();
       break;
case 6:delete();
       break;
case 7:find_middle_node();
       break;  
case 8:reverse();
      break;
case 9:exit(1);
      break;
default:printf("invalid choice \n");


}
}
}



void append()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the data:");
scanf("%d",&temp->data);
if(root == NULL)
{
root = temp;
}
else
{
struct node* p;
p=root;
while(p->link != NULL)
{
p=p->link;
}
p->link=temp;
}
}

int length()
{
int count=0;
struct node* temp;
temp=root;
while(temp != NULL)
{
count++;
temp=temp->link;
}
return count;
}

void addDataBegin()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&temp->data);
temp->link=NULL;
if(root == NULL)
{
root = temp;
}
else{
temp->link=root;
root=temp;
}
}
  
void display(){
struct node* temp;
temp=root;
if(root == NULL)
printf("list empty \n");
else{
while(temp != NULL)
{
printf("%d-->",temp->data);
temp=temp->link;
}
printf("\n \n");
}
}

void addDataAfter(){
struct node* temp,*p;
int loc,i=1;
printf("enter location:");
scanf("%d",&loc);
if(loc>length())
printf("invalid location \nwe have only %d nodes\n",length());
else{
p=root;
while(i<loc)
{
p=p->link;
i++;
}
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&temp->data);
temp->link=NULL;
temp->link=p->link;
p->link=temp;
}
}

void delete(){
struct node* temp;
int loc;
printf("enter location:\n");
scanf("%dASW",&loc);
if(loc>length())
printf("invalid location\n");
else if(loc==1)
{
temp=root;
root=temp->link;
temp->link=NULL;
free(temp);
}
else
{
struct node* p=root,*q;
int i=1;
while(i<loc-1)
{
p=p->link;
i++;
}
q=p->link;
p->link=q->link;
q->link=NULL;
free(q);
}
}


void find_middle_node()
{
	struct node *ptr1, *ptr2;
	ptr1 = root;//1000
	ptr2 = root;//1000
	if(root == NULL)
	{
		printf("list is empty");
		//return NULL;
	}
	while(ptr2!= NULL && ptr2->link != NULL)//1000 != NULL && 3000 != NULL	//7000 != NULL && 9000 != NULL	(6000 != NULL && NULL != NULL)
	{
		ptr1 = ptr1->link; 		//ptr1 = 3000		ptr1 = 7000
		ptr2 = ptr2->link->link;//ptr2 = 7000		ptr2 = 6000
	}

	printf("Middle node is %d\n", ptr1->data);
	//return ptr1;
}

void reverse()
{
struct node *p,*q;
int i,j,len;
len=length();
i=0;
j=len-1;
p=q=root;
if(root==NULL)
printf("empty list");
else
{
	while(i<j)
	{
	   int k=0;
	   while(k<j)
	   {
	   	q=q->link;
	   	k++;
	   }
	   int temp=p->data;
	   p->data=q->data;
	   q->data=temp;
	   i++;
	   j--;
	   p=p->link;
	   q=root;
    }

}

}