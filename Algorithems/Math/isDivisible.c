#include <stdio.h>

int main()
{
    int num,numm;

    printf("Enter the first number: ");
    scanf("%d", &num);
	
	printf("Enter the second number: ");
    scanf("%d", &numm);


   
    if((num % numm == 0))
    {
        printf("\n****** %d is divisible by %d *****\n",num,numm);
    }
   

    return 0;
}