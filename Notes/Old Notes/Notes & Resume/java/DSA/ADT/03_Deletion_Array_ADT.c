//first type
/*
#include<stdio.h>
main()
{
	int arr[100] = {12,23,34,45,56,67,78};
	int size = 7, index = 1;
	display(arr,size);
	printf("\n");
	deletion(arr,size,index);
	size-=1;
	display(arr,size);
}
void display(int arr[],int size)
{
	int i = 0;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void deletion(int arr[],int size,int index)
{
	int i = 0;
	for(i=0;i<size;i++)
	{
		arr[i] = arr[i+1];
	}
	arr[i] = NULL;
}
*/

//second type
#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,56,67,78,89};
	int N = sizeof(arr)/sizeof(int),k=0,index=1;
	while(k<N)
	{
		printf("%d ",arr[k]);
		k++;
	}
	printf("\n");
	k = index-1;
	while(arr[k]!=NULL)
	{
		arr[k] = arr[k+1];
		k++;
	}
	arr[k] = NULL;
	N--;
	k=0;
    while(k<N)
	{
		printf("%d ",arr[k]);
		k++;
	}
}
