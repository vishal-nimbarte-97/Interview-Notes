//binary Serching Algorithm
#include"stdio.h"
main()
{
	int arr[] = {12,23,34,45,56,67,78,89};
	int N = sizeof(arr)/sizeof(int);
	int i = 0;
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	int s;
	printf("\nEnter the serching number : ");
	scanf("%d",&s);
	int beg = 0;
	int end = N-1;
	int mid = 0;
	while(beg<=end)
	{
		mid = (beg+end)/2;
		if(arr[mid]==s)
		{
			printf("\nTHE ELEMENT FOUND IN THE LOCATION is %d",mid+1);
			break;
		}
		else if(s>arr[mid])
		{
			beg = mid + 1;
		}
		else if(s<arr[mid]) 
		{
			end = mid - 1;
		}
		
	}
	if(beg>end)
	{
		printf("THE ELEMENT CAN NOT FOUND IN ANY LOCATION");
	}
}
