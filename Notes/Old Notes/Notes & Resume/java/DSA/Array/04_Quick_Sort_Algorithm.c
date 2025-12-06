//Quick Sort Algorithm
/*
#include<stdio.h>
void printArray(int *arr, int n)
{
	int i = 0;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void QuickSort(int *arr, int first, int last)
{
	int i = 0 , j = 0, pivot = 0 , temp = 0;
	if(first<last)
	{
		pivot = first;
		i = first;
		j = last;
		
		while(i<j)
		{
			while(arr[i]<=arr[pivot])
			{
				i++;
			}
			while(arr[j]>arr[pivot])
			{
				j--;
			}
			
			if(i<j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
		temp = arr[pivot];
		arr[pivot] = arr[j];
		arr[j] = temp;
		
		QuickSort(arr,first,j-1);
		QuickSort(arr,j+1,last);
	}
}
main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(arr)/sizeof(int);
	printf("Before the Quick Sorting Array\n\n");
	printArray(arr,n);
	QuickSort(arr,0,n-1);
	printf("\n\nAfter the Quick Sorting Array\n\n");
	printArray(arr,n);
}
*/
//Quick Sort Algorithm
#include<stdio.h>
void printArray(int *arr, int n)
{
	int i = 0;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void QuickSort(int *arr, int first, int last)
{
	int i = 1, j = 0 , pivot = 0, temp = 0;
	
//	// 0  1  2  3 4  5  6  7  8  9
//	//12 90 43 23 9 67 55 32 56 67
//	      |       |
//	//12 9 43 23 90 67 55 32 56 67
//	     |  |  
//	//9 12 43 23 90 67 55 32 56 67
	
	if(first<last)//0<9
	{
		pivot = first;//0
		i = 1;//0
		j = last;//9
		
		while(i<j)//0<9//1<4
		{
			while(arr[i]<=arr[pivot])//arr[1]<=arr[0]->stop || arr[1]<=arr[0] || arr[2]<=arr[0]->stop
			{
				i++;//2
			}
			//arr[9]>arr[0]||arr[8]>arr[0]||arr[7]>arr[0]||arr[6]>arr[0]||arr[5]>arr[0]||arr[4]>arr[0]->stop
			while(arr[j]>arr[pivot])// arr[4]>arr[0] || arr[3]>arr[0] || arr[2]>arr[0] || arr[1]>arr[0]-stop
			{
				//8//7//6//5//4
				j--;//3//2//1
			}
			
			if(i<j)//1<4|| 2<1->false
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		temp = arr[pivot];//temp -> 12
		arr[pivot] = arr[j];//arr[0] -> 9
		arr[j] = temp;//arr[1] = 12
		
		QuickSort(arr,first,j-1);
		QuickSort(arr,j+1,last);
	}
}
main()
{
	int arr[] = {7,6,10,5,9,2,1,15,7};
	int n = sizeof(arr)/sizeof(int);
	printf("Before Quick Sort Algorithm\n\n");
    printArray(arr,n);
    QuickSort(arr,0,n-1);
    printf("\n\nAfter Quick Sort Algorithm\n\n");
    printArray(arr,n);
}

















