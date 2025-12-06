
#include"stdio.h"
main()
{
	int arr[] = {12,23,34,45,56,67,78,89};
	int size = sizeof(arr)/sizeof(int);
	int serchElement ,i=0 ;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
		
	}
	printf("\n\n");
	printf("Serching Numeber = ");
	scanf("%d",&serchElement);
	printf("\n\n");
	serchingIndex(arr,&size,&serchElement);
}
void serchingIndex(int *arr,int *size,int *serchElement)
{
	int i = 0;
	for(i=0;i<*size;i++)
	{
		if(arr[i]==*serchElement)
		{
			printf("THE %d ELEMENT FOUND IN THE LOCATION IS %d",*serchElement,i+1);
			break;
		}
	}
	if(i==*size)
	{
		printf("THE %d ELEMENT CAN NOT FOUND IN THE ANY LOCATION ",*serchElement);
	}
}

/*
#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,56,67,78,89};
	int N = sizeof(arr)/sizeof(int);
	int s,i=0;
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nserching number = ");
	scanf("%d",&s);
	for(i=0;i<N;i++)
	{
		if(arr[i]==s)
		{
			printf("THE %d ELEMENT FOUND IN THE LOCATION %d\n",s,i+1);
			break;
		}
	}
	if(i==N)
	{
		printf("THE %d ELEMENT CAN NOT FOUND ANY LOCATION",s);
	}
}
*/
