#include<stdio.h>
#include<stdlib.h>
#include"display.h"
// by debbah Mehdi Sofiane
// file containt  display and create fonction for matrix 

// fonction to create matrix allocation
int ** create_Matrix(int n ){
	int i ; int **tab ;
	//memory allocation for matrix
	tab= (int**)(malloc(n* sizeof(int*))) ;
    for(  i=0;i<n;i++) tab[i]=(int *)( malloc(n*sizeof(int)));
	return tab;

}

// fonction to fill in the matrix desired value
void fill_Matrix (int n, int **tab , int value){
	 // fill in the matrix
	 int i=0 ,j;
	 while( i<n){
		   j=0;
		while(j<n){ tab[i][j]= value ;j++ ;}
		   i++;}

}


// fonction to show matrix
void show_Matrix(int**t, int n){
 int i,j;
 for( i=0;i<n;i++)	{
	 	for( j=0;j<n;j++){
	 		 printf("%d \t",t[i][j]);
		 }

	 	printf("\n");

	 }
}

/*int main(){
	
	
    
	return 0;
}*/
