#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<time.h>
// by debbah Mehdi Sofiane Mehdislik
// calculate fibannci of N in recursive
int fibo_rec ( int n); 
// calculate fibannci of N in iterative way
int fibo_iterratif(int n);


 int main(){
 	int val ;clock_t t1 ,t2; float t;
 	printf("entrez la valeur : \n");
 	scanf("%d",&val);
 	 
 	 fibo_rec(val);
 	printf("fibboncaci(%d )est :%d \n",val, fibo_iterratif(val));
 
 }
 
 int fibo_rec ( int n){
 	if(n==0){
 		return 0;
	 }
	 else if( n==1){
	 	return 1;
	 }
 	else {
 		
 		return fibo_rec(n-1)+fibo_rec(n-2);
	 }
 }
 
 int fibo_iterratif(int n){
 	int i =0;
 	int nz=0;
 	int n1=1;int un=1;
 	for( i=2;i<=n;i++)
 	
 	{
	 un=nz ;nz=n1;
 	
 	 n1=nz+un;
 		
	 }
 return n1;	
 }
