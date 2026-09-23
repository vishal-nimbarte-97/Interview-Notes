/*
#include<stdio.h>
main()
{
	int arr[100] = {7,8,12,27,88};
	int size = 5, element = 45,index = 3;
	display(arr,size);
	insertion(arr,size,element,100,index);
	size+=1;
	display(arr,size);
}
void display(int arr[],int n)
{
	int i =0;//traversing array
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int insertion(int arr[],int size,int element,int capacity,int index)
{
	if(size>=capacity)
	{
		return -1;
	}
	int i = 0;
	for(i=size-1;i>=index;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[index] = element;
	return 1;
}
*/

//second type in the inserting the array in the element
/*
#include<stdio.h>
void display(int arr[],int n)
{
	int i = 0;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

void insertion(int arr[],int size,int index,int element)
{
	int i = 0;
	printf("\n");
	for(i=size-1;i>=index-1;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[index-1] = element;
}
main()
{
	int arr[100] = {12,23,34,45,56,67};
	int size = 6, index = 1, element = 99;
	display(arr,size);
	insertion(arr,size,index,element);
	size+=1;
	display(arr,size);
}
*/
//thired type of the isertion array
#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,56};
	int N = sizeof(arr)/sizeof(int),element = 99, index = 2;
	int i = N-1,k=0;
	for(k=0;k<N;k++)
	{
		printf("%d ",arr[k]);
	}
	printf("\n");
	while(i>=index-1)
	{
		arr[i+1] = arr[i];
		i--;
	}
	arr[index-1] = element;
	N++;
	for(k=0;k<N;k++)
	{
		printf("%d ",arr[k]);
	}
	printf("\n");
}
