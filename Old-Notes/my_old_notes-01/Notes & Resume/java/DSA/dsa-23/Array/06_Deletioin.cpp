//Deletion
#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,56};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	//logic of deletion
	int index = 3;
	for(int i=index;i<n;i++)
	{
		arr[i] = arr[i+1];
	}
	arr[n] = NULL;
	n--;
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
