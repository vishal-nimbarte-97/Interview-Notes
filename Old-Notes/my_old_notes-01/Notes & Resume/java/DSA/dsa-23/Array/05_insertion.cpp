//insertion
#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,56};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	int index = 3;
	int element = 99;
	for(int i=n;i>index;i--)
	{
		arr[i] = arr[i-1];	
	}
	arr[index] = element;
	printf("\n");
	n++;
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
