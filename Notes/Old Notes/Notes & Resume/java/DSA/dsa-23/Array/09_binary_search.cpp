#include<stdio.h>
//complexity O(log n)
main()
{
	int arr[] = {12,23,34,45,56,67};
	int search = 12;
	int beg = 0;
	int end = sizeof(arr)/sizeof(int)-1;
	int mid = 0;
	for(int i=0;i<=end;i++)
	printf("%d ",arr[i]);
	printf("\n");
	while(beg<=end)
	{
		mid = (beg+end)/2;
		if(arr[mid]==search)
		{
			printf("The element can found in location %d",mid+1);
			break;
		}
		else if(arr[mid]>search)
		{
			end = mid - 1;
		}
		else if(arr[mid]<search)
		{
			beg = mid + 1;
		}
	}
}
