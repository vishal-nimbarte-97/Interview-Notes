//Selection algorithm

/*
#include"stdio.h"
void printArray(int *arr,int n)
{
	int i = 0;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void selectionSortAglorithm(int *arr,int n)
{
	int i = 0, j = 0, temp = 0 , min = 0;
	for(i=0;i<n-1;i++)//for number of passes
	{
		min = i;
		for(j = i+1; j<n ; j++)//for number of comparison
		{
			if(arr[j]<arr[min])
			{
			min = j;
		    }
		}
		
	temp = arr[i];
	arr[i] = arr[min];
	arr[min] = temp;
	}
}
main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(arr)/sizeof(int);
	printf("Before sorting Array\n\n");
	printArray(arr,n);
	selectionSortAglorithm(arr,n);
	printf("\n\nAfter sorting Array\n\n");
	printArray(arr,n);
	
}
*/

#include<stdio.h>
void printArray(int *arr,int n)
{
	int i = 0;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void selectionSort(int *arr, int n)
{
	int i = 0, j = 0, temp = 0 , min = 0 ;
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j = i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j ;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}
main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(arr)/sizeof(int);
	printArray(arr,n);
	selectionSort(arr,n);
	printf("\n");
	printArray(arr,n);
}
