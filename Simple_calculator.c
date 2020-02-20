#include <stdio.h>
int plus(int , int);
int sub(int , int);
int multi(int ,int);
int divide(int , int);
int main()
{
	int a,b,z;
	char o;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("Which operation do you want to perform\n");
	scanf(" %c",&o);
	if (o=='+')
	{
		z=sum(a,b);
	}
	if (o=='*')
	{
		z=multi(a,b);
	}
	if (o=='/')
	{
		z=divide(a,b);
	}
	if (o=='-')
	{
		z=sub(a,b);
	}
	printf("%d %c %d = %d",a,o,b,z);
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
int sub(int x,int y)
{
	int z;
	z=x-y;
	return(z);
}
int divide(int x,int y)
{
	int z;
	z=x/y;
	return(z);
}
int multi(int x,int y)
{
	int z;
	z=x*y;
	return(z);
}
