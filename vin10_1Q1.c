#include<stdio.h>

cube()
{
	int a,b;
	
	printf("Enter any number :- ");
	scanf("%d",&a);
	
	b = a * a * a;
	
	printf("Cube of given number :- %d",b);
}

void main()
{
	cube();
}
