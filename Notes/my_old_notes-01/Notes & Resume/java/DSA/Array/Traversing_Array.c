//Traversing Array Algorithm
#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,56,67,78,89};
	int N = sizeof(arr)/sizeof(int);
	int i = 0;
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
}
