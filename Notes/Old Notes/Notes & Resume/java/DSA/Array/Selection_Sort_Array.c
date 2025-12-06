
#include<stdio.h>
main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int N = sizeof(arr)/sizeof(int);
	int i = 0;
	int j = 0;
	int temp;
	printf("Before the sorting Array\n\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	for(i=1;i<N;i++)
	{
	   temp = arr[i];
	   j = i;
	   while(j>0 && arr[j-1]>temp)
	   {
	   	arr[j] = arr[j-1];
	   	j--;
	   }
	   arr[j] = temp;
	}
	printf("After the Sorting Array\n\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
}
