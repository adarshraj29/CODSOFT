#include<stdio.h>
main()
{
	int n1,n2;
	char ch;
	printf("enter two number and operator  ");
	scanf("%d %d %c",&n1,&n2,&ch);

	if(ch== '+')
	{
		printf("addition = %d  ", n1+n2);
	}
	else if(ch=='-')
	{
		printf("subtraction = %d ", n1-n2);
	}
	if(ch=='*')
	{
		printf("multiplication =  %d ", n1*n2);
	}
	else if(ch=='/')
	{
		printf("Division = %d ", n1/n2);
	}
	else if(ch=='%')
	{
		printf("remainder = %d ", n1%n2);
	}
}