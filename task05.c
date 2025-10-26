#include<stdio.h>
int main()
{
	int i,j;
	int arr[3][3];
	int transpose[3][3];
	printf("Enter elements for a matrix\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3;j++)
		{
		printf("%d ", arr[i][j]);
	    }
	   printf("\n"); 
    }
    printf("Transpose is:\n");
    for(i=0; i<3; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		transpose[j][i]=arr[i][j];
    		printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
}

