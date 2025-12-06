#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,56,67,78,89};
	int N = sizeof(arr)/sizeof(int);
	int i = 0,S;
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Enter the Serching Number = ");
	scanf("%d",&S);
	serch(arr,0,N-1,S);
}
void serch(int arr[],int beg,int end,int S)
{
	int mid;
	while(beg<=end)
	{
		mid = (beg+end)/2;
		if(arr[mid]==S)
		{
			printf("THE %d ELEMENT FOUND IN THE LOCATION %d\n",S,mid+1);
            break;
		}
		else if(S>arr[mid])
		{
			beg = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	if(beg>end)
	{
		printf("THE %d ELEMENT CAN NOT FOUND ANY LOCATION",S);
	}
}
