#include<stdio.h>
int main()
{
	int i; 
	int t;
	int j;
	printf("enter a number for which u want a table:");
	scanf("%d", &t);
	for(i=0; i<=10; i++)
	{
		j=t*i;
		printf("%d x %d = %d\n", t,i,j);
	}
}
