#include<stdio.h>

prop()
{
	int a,b;
	
	printf("Enter Value to find number is devisible by 3 & 5 :- ");
	scanf("%d",&a);
	
	if(a % 3 == 0 && a % 5 == 0)
	{
		printf("The given number %d is devisiable by 3 & 5.");
	}else
	{
		printf("The given number %d is not devisiable by 3 & 5.");
	}
}

void main()
{
	prop();
}
