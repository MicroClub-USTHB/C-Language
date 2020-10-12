//[Version:EN]
#include <stdio.h>
#include <stdlib.h>
void ReadTwo(int* x,int* y){
    printf("Enter first number: ");
    scanf("%d",x);
    printf("Enter second number: ");
    scanf("%d",y);
}
void PrintMenu(){
    printf("\nOperations :\n");
    printf("1-Addition\n");
    printf("2-Substraction\n");
    printf("3-Multiplication\n");
    printf("4-Division\n");
    printf("5-Modulus\n");
    printf("Enter Number :");
}

int main(){
    int x,a,b;
    PrintMenu();
    scanf("%d",&x);
    while (x!=0)
    {
        ReadTwo(&a,&b);
        system("cls");
        switch (x)
        {
        case 1:
            //Addition
            printf("%d + %d = %d",a,b,a+b);
            break;
        case 2:
            //Substraction
            printf("%d - %d = %d",a,b,a-b);
            break;
        case 3:
            //Multiplication
            printf("%d * %d = %d",a,b,a*b);
            break;
        case 4:
            //Division
            if(b!=0) printf("%d / %d = %d",a,b,a/b);
            else printf("impossible to divide by 0");
            break;
        case 5:
            //Modulus
            if(b!=0) printf("%d modulus %d = %d",a,b,a%b);
            else printf("impossible to divide by 0");
            break;
        default:
            printf("This operation doesnt Exist\n");
            break;
        }
        PrintMenu();
        scanf("%d",&x);
    }
    
    return 0;
}