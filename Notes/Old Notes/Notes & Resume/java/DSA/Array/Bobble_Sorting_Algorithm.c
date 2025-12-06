//Bobble Sorting Algorithm

/*
#include"stdio.h"
main()
{
	int arr[] = {99,98,97,96,95,94,93,92,91,90};
    int N = sizeof(arr)/sizeof(int);
    int i = 0,j = 0;
    for(i=0;i<N;i++)
    {
    	printf("%d ",arr[i]); 
	}
	printf("\n");
	int temp;
	for(i=0;i<N;i++)
	{
		int k = 0;
		for(j=0;j<N-1-i;j++)
		{
     	   if(arr[j]>arr[j+1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			k = 1;
		}
	}
	if(k==0)
	{
		break;
	}
   }
   for(i=0;i<N;i++)
   {
   	printf("%d ",arr[i]);
   }
}
*/

//Bobble sorting algorithm

#include<stdio.h>
main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int N = sizeof(arr)/sizeof(int);
	int i = 0, j = 0;
	printf("Before Sorting Array \n\n");
	for(;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	int temp;
	for(i=0;i<N;i++)
	{
		int k = 0;
		for(j=0;j<N-1-i;j++)
		{
     	   if(arr[j]>arr[j+1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			k = 1;
		}
	}
	if(k==0)
	{
		break;
	}
   }
	printf("After the sorting Array\n\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
}
