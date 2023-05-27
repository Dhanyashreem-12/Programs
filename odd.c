#include<stdio.h>
void main()
{
	int i=1,n;
	printf("enter the n value\n",n);
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		printf("%d\n",i);
		i++;
	}
}
