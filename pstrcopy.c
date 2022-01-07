#include<stdio.h>
#include<stdlib.h>
void main()
{
char *str1="nagesh";
char *str2=(char*)malloc(sizeof(str1));
printf("%p,%p",str1,str2);
char *s1 = str2;
while(*str1 != '\0')
{
*str2 = str1;
str1++;
str2++;
}
*str2='\0';

printf("%s",s1);
}


/*
#include<stdio.h>

void copy_string(char*, char*);

main()
{
    char source[100], target[100];    
    printf("Enter source string\n");    
    fgets(source,100,stdin);    
    copy_string(target, source);    
    printf("Target string is \"%s\"\n", target);    
    return 0;
}

void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}
*/

