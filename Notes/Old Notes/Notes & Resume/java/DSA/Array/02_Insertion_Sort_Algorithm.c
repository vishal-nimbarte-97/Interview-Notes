//Selection sort algorithm
#include<stdio.h>
void printArray(int *arr,int n)
{
	int i = 0;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void selectionSortAlgorithm_01(int *arr, int n)
{
	int i = 0, j = 0,key;
	for(i=1;i<=n-1;i++)
	{
		key = arr[i];
		j = i-1;
		//loop for each pass
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
void selectionSortAlgorithm_02(int *arr, int n)
{
	int i = 0, j = 0, temp;
	for(i=1;i<n;i++)
	{
		temp = arr[i];
		j = i;
		while(j>0 && arr[j-1]>temp)
		{
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = temp;
	}
}
main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(arr)/sizeof(int);
	printf("Before the Seletion  Sort Algorithm\n");
	printArray(arr,n);
	selectionSortAlgorithm_02(arr,n);
	printf("Afte the Seletion  Sort Algorithm\n");
	printArray(arr,n);
}
