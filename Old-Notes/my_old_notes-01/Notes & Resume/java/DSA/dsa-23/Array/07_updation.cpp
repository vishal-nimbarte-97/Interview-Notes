//updation
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
	int index = 2;
	int element = 99;
	arr[index] = element;
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
