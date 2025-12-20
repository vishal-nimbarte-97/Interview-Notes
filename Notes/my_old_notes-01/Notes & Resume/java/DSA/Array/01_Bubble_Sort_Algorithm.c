//Bubble Sort Algorithm:-
//Bubble sort is sorting algorithm , thire is two number checked and swapping the 
// topmost element is last postion and small element position first

//1.complexity - 0(n^2)
//2.Non - Adptive
//3.Stability

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
void BubbleSortAlgorithm(int *arr,int n)
{
	int i = 0,j = 0,temp;
	for(i=0;i<n-1;i++)//for number of passes
	{
		for(j=0;j<n-1-i;j++)//for number of comparison element
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int n = sizeof(arr)/sizeof(int);
	printf("Before the Bubble Sorting Algorithm \n\n");
	printArray(arr,n);
	printf("\n \n");
	BubbleSortAlgorithm(arr,n);
	printf("After the Bubble Sorting Algorithm \n\n");
	printArray(arr,n);
}
*/

//1.Best Time Complexity - 0(n)
//2.Adaptive
//3.Stability
//4.one pass but already sorted array element

#include<stdio.h>
void BubbleSortArray(int *arr,int n);
void printArray(int *arr,int n);
main()
{
	//int arr[] = {1,2,3,4,5,6,7,8,9};
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(arr)/sizeof(int);
	printArray(arr,n);
	printf("\n\n");
	BubbleSortArray(arr,n);
	printf("\n\n");
	printArray(arr,n);
}
void printArray(int *arr,int n)
{
	int i = 0;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void BubbleSortArray(int *arr,int n)
{
	int i = 0, j = 0, temp, onepass = 0;
	for(i=0;i<n-1;i++)
	{
		printf("Number of passes - %d\n",i+1);
		onepass = 1;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				onepass = 0;
			}
		}
		if(onepass)
		{
			break;
		}
	}
}
