#include <stdio.h>
int main() {
    int start, end;
    int num, i;
    int prime;
    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);
    
    if(start < 2)
	 {
        start = 2;
    }
    
    printf("Prime numbers between %d and %d are:\n", start, end); 
    for(num=start; num<=end; num++) 
	{
        prime = 1;
        
        for(i = 2; i <= num/2; i++) {
            if(num % i == 0) {
                prime = 0;
                break;
            }
        }
        if(prime == 1)
            printf("%d, ", num);
        }
    
    printf("\n");
}
