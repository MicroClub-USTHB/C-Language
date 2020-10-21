#include <stdio.h>

int main() {
   int i,j;
   float a[0],total;
   int n ;


   printf("\nEnter the number of digits/numbers\n");
   scanf("%d",&n);
    for(i = 0; i < n; i++) {
		
   printf("\nEnter number %d :",i);
   scanf("%f",&a[i]);
	}
  
   total = 0;
   
   for(j = 0; j < n; j++) {
	  
      total += a[j];
   }

   printf("Average is = %f\n", total/n);
   return 0;
}