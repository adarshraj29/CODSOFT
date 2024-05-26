#include<stdio.h>
main()	
{
	int n1, n2;
	char op;
	
	printf("enter two number and a operator :- ");
	scanf("%d %d %c", &n1,&n2,&op);
	fflush(stdin);
	
	switch(op)
	{
		case '+' : printf("addition = %d",n1+n2); break;
		
		case '-' : printf("subtraction = %d",n1-n2);break;
		
		case '*' : printf("multiplication = %d",n1*n2);break;
		
		case '/' : printf("division = %d",n1/n2);break;
		
		case '%' : printf("remainder = %d",n1%n2);break;
		
		default : printf("invalid operator");
	}
}