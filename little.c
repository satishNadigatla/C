// little indian or big indian
#include <stdio.h>
void main()
{
	int x;
        printf("enter value");
        scanf("%d",&x);
	char *ptr = (char *)&x;
	if(*ptr)
	{
		printf("Machine is Little endian");
	}
	else
	{
		printf("Machine is Big endian");
	}

}
