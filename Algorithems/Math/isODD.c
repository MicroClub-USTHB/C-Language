#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // false if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is not odd.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}