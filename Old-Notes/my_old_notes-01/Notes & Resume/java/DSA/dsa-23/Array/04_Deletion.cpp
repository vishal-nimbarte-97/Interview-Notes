//Deletion
//two cases:
//case:1 delete the last index position element
//case:2 delete the middle element in the index position

#include<stdio.h>
main()
{
	//case:-1 complexity is O(1);
//	int arr[] = {12,23,34,45,56};
//	int i = 0;
//	int n = sizeof(arr)/sizeof(int);
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	arr[n] = NULL;
//	n--;
//	printf("%d\n",arr[n]);
//	for(i = 0;i<n;i++)
//	printf("%d ",arr[i]);

	int arr[] ={12,23,34,45,56};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
//	
	printf("\n");
	
	arr[n] = NULL;
	n--;
	
	printf("%d\n",arr[n]);
	
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
