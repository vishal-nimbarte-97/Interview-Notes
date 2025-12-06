//Reversing Array algorithm

//Easy Algorithm

/*
#include"stdio.h"
main()
{
	int arr[] = {12,23,34,45,56,67,78,89,99};
	int N = sizeof(arr)/sizeof(int);
	int i = 0;
	
	printf("Before the Reversing Array \n\n");
	
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	
	printf("After the Reversing Array\n\n");
	
	for(i=N-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
*/


//Another Way
#include"stdio.h"
void reverse(int arr[20],int first,int last);
main()
{
	int arr[] = {12,23,34,45,56,67,78,89,99};
	int N = sizeof(arr)/sizeof(int);
	int i = 0;
	printf("Before the Reversing Array\n\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	reverse(arr,0,N-1);
}
void reverse(int arr[20],int first,int last)
{
	int k = 0;
	int i = first;
	int j = last;
	int temp;
	while(i<j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	printf("\n\nAfter the Reversing Array\n\n");
	for(k=0;k<=last;k++)
	{
		printf("%d ",arr[k]);
	}
}
