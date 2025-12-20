//linear search
#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,45,67,45};
	
	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
	{
		printf("%d ",arr[i]);
	}
	
	
	printf("\n");
	
	
	//logic of linear search
	int search = 45;
	int count = 1;
	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
	{
		if(arr[i]==search)
		{
			count++;
			if(count>2)
			{
				printf("THE %d ELEMENT CAN FOUND IN LOCATION %d\n",search,i+1);
			}
		}
	}
}
