#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// by debbah Mehdi Sofaine (mehdi slik)
//this file  containt the implemantation of  insertion sort in C 
// link :https://en.wikipedia.org/wiki/Insertion_sort
int main()
{
  int i,j,n;
  int* res ;
  printf("entre the size of array: \n");
  scanf("%d",&n);
  // declartion of the array 		 	
  int * t ;
  t= (int*)(malloc(n* sizeof(int))) ;
  
  // fill in array
  	for( i=0;i<n;i++){
  	
		 t[i]=rand()%100;
		fflush(stdin);
		 }
		 
   printf("\n before sort \n");
   
 	// show array
	 for( i=0;i<n;i++)	{
	 	printf("%d \t",t[i]);
	 }
	 		 		 
    //insertion sort 
     for( i = 0 ;i < n ; i++ ) {

      int temp = t[ i ];    
      int j = i;

          while(  j > 0  && temp < t[ j -1]) {

          
                t[ j ] = t[ j-1];   
                j= j - 1;

           }
           t[ j ] = temp;       
     }  

    printf("\n after sort \n");
 	// show array after sort
	 for( i=0;i<n;i++)	{
	 	printf("%d \t",t[i]);
	 }


return 0;

}
