#include<stdio.h>
#include<stdlib.h>
// This program is developed by Tanishq Agarwal(047pegasus)
//This file contains the implementation of Selection sort in C Programming language.
int* selectionSort(int arr[], int n)
{
	int i, j, min,temp;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
		// swap(&arr[min], &arr[i]); can be used in c++ to swap elements directly without its implimenattion.
	}
	return arr;
}

int main(){
	int n_ele=0;
	printf("Enter the no of elements in the array:");
	scanf("%d",&n_ele);//size of the array
	int *inp_arr= (int *)(malloc(n_ele*sizeof(int))); //array memory allocation

	//input array
	for (int i = 0; i < n_ele; i++)
	{
		scanf("%d",&inp_arr[i]);
	}

	printf("\n Before sorting the array: \n");

 	// printing unsorted array recieved from user
	 for(int i=0;i<n_ele;i++)	{
	 	printf("%d \t",inp_arr[i]);
	 }

	int *final_arr=selectionSort(inp_arr,n_ele); //recieving sorted array

	printf("\n After sorting the array using Selection sort: \n");

	//printing sorted array
	for( int i=0;i<n_ele;i++)	{
	 	printf("%d \t",final_arr[i]);
	 }

 return 0;
}
