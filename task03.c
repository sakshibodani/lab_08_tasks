#include<stdio.h>
int main()
{
	int i,j;
	int a[2][2], b[2][2], sum[2][2];
	printf("enter the digits for the first 2x2 martrix:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d",&a[i][j]);
	    }
	}
	printf("enter the digits for the second  2x2 martrix:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d",&b[i][j]);
	    }
	}
	printf("the sum of both matrices is:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}

}
