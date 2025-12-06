//insertion the element
//two cases :- 
//1-insert the element in last index position
//2-insert the element in the inside the array index position
#include<stdio.h>
main()
{
	int arr[] = {12,23,45,56,67,78};
	int i = 0;
	for(i=0;i<sizeof(arr)/sizeof(int);i++)
	{
		printf("%d ",arr[i]);
	}
	//case :- 1
//	printf("\n");
//	int element = 100;
//	arr[sizeof(arr)/sizeof(int)] = element;
////	arr = arr + 1;
//	for(i=0;i<=sizeof(arr)/sizeof(int);i++)
//	{
//		printf("%d ",arr[i]);
//	}

	//case :- 2
	printf("\n");
	int element = 99;
	int index_position = 3;
	for(i=sizeof(arr)/sizeof(int);i>=index_position;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[index_position] = element;
	
	for(i=0;i<=sizeof(arr)/sizeof(int);i++)
	{
		printf("%d ",arr[i]);
	}
	
}
