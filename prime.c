#include<stdio.h>
int main()
{
	int i,a,count=0;
	printf("enter the value for a:");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
			count++;
	}
	if(count==1)
	    printf("%d is a prime number",a);
	      
	else
		printf("%d is not a prime number",a);
	return 0;
}
