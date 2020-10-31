#include<stdio.h>
#include<stdlib.h>
#include"display.h"
// if you cant add display
#include "display.c"

// by debbah Mehdi Sofiane(MehdiSlik)
// to make sum of tow they need to bee square matrix they have the same size n*n


// fonction make add tow square matrix
 int ** sum_Of_tow_matrix(int ** tab , int ** tab2,  int n){
    int  i=0,j=0;int k=0;  int ** tab3;
    tab3= create_Matrix(n);
	for( i=0;i<n;i++) {

		for(j=0;j<n;j++){
		    tab3[i][j]=0;

			for(k=0;k<n;k++){
			    tab3[i][j]= (tab2[i][k]+ tab[i][k]);
					}
					    }
						    }
	return tab3;

 }


int main(){

   //clock_t t1 ,t2;float t ;
   int * *tab	 ;int * *tab2;
   int **tab3;
   int j ,i; int m,p,n;int v=0;
   printf("entre the size of the array :\n");
   scanf("%d",&n);
   // create  matrix A
   tab =create_Matrix(n);
   fill_Matrix(n,tab,rand()%100);
   // create  matrix B
   tab2 =create_Matrix(n);
   fill_Matrix(n,tab2,50);
   printf("\n show matrix A :  \n");
    // afichage du tableau A
    show_Matrix(tab,n);


	 printf("\n show matrix B:  \n");
    // afichage du tableau B
    show_Matrix(tab2,n);


	tab3=sum_Of_tow_matrix(tab,tab2,n);
	printf("\n show matrix C  sum:  \n");
	// show add of tow matrix
    show_Matrix(tab3,n);

    // free allocation of memory
	free(tab);
	free(tab2);
	free(tab3);





		   return 0;
	}


