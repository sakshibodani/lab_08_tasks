#include<stdio.h>
int main()
{
	int i,j,k;
	int a[2][2][2]={{{2,3},{6,8}}, {{6,9},{0,8}}};

	printf("the 3d array is: \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2;j++)
		{
			for(k=0; k<2; k++)
			{
			printf("%d ", a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
