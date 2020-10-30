#include<stdio.h>
#include<stdlib.h>

// by debbah Mehdi Sofaine (MehdiSlik)

// note : in binarys search the vector must be sorted 

// binary search of an  element 
int binary_search(int* vect ,int N,int x)
{
// debut :is the begin of vector  vect
// fin : is the end of vector  vect
// x :is the element we went to search 
 int debut =0 ; int fin= N-1,mil;
 
 while( fin>=debut) {
 	
 	mil=(int)((debut+fin)/2);
        if (x==vect[mil]){
	    printf(" the element exist his index is :%d ",mil);
	    return mil;}
        else if (x>vect[mil])debut=mil+1;
        else fin=mil-1; 
        
		}
		
	    // if fin< debut
	    printf("the element doesnt exist ");
	    return -1 ;
}
	
	
int main(){
	
    int n,i ;int * t,x;
	
    printf("entre the size of the array :\n");
    scanf("%d",&n); 
    
	//array allocation		 	
 	t= (int*)(malloc(n* sizeof(int))) ;
 	
      //array initialization
  	for( i=0;i<n;i++){
		 *(t+i)=i+5;
		 fflush(stdin);
		 }
		 
    printf("\n show array: \n");
    // array show
      for( i=0;i<n;i++)	{
	 	printf("%d \t",t[i]);
	 }
	  		 
    printf("\n entre the element you went to search :");
    fflush(stdin);
    scanf("%d",&x);

    int indexe=binary_search(t,n,x);
    //printf("the indexe :%d",indexe);
	
}
 
