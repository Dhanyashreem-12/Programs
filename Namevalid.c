#include<stdio.h>
#include<string.h>

void main(){

char* name[50];
int lengthOfName;

printf("Enter your name\n");
scanf("%s", name);

if(strlen(name)>30)
{
printf("%s is longer than 30 characters\n", name);
printf("Hence its an invalid name\n");
}
else printf("%s is a valid name", name);
}

