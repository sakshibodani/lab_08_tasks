#include <stdio.h>

int main() 
{
    int a[3][3];
    int i, j, k;
    int found = 0; 
    printf("Enter elements of 3x3 matrix:\n");
    for(i=0; i<3;i++) 
	{
        for(j=0; j<3;j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++) 
	{
        for(j=0;j<3;j++) 
		{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<3;i++)
	 {
        for(j=0;j<3;j++) 
		{
            int value = a[i][j];
            int min = 1;
            int max = 1;
            
            for(k=0; k<3; k++) 
			{
                if(a[i][k] < value) 
				{
                    min = 0;
                    break;
                }
            } 
            if(min == 1) 
			{
                for(k=0; k<3; k++) 
				{
                    if(a[k][j] > value) 
					{
                        max = 0;
                        break;
                    }
                }
            }          
            if(min == 1 && max == 1) 
			{
                printf("\nSaddle point found at [%d, %d] with value %d\n", i, j, value);
                found=1;
            }
        }
    } 
    if(found==0) {
        printf("No saddle pointin the matrix\n");
    }

}
