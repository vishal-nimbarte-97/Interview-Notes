////Linear Serching Array
//
///*
//#include"stdio.h"
//main()
//{
//	int arr[] = {12,23,34,45,56,67,78,89};
//	int s , i = 0 , N = sizeof(arr)/sizeof(int);
//	printf("Serching The Element\n\n");
//	while(i<N)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	printf("\n\nEnter the the serching element in the list : ");
//	scanf("%d",&s);
//	for(i=0;i<N;i++)
//	{
//		if(arr[i]==s)
//		{
//			printf("\nTHE ELEMENT FOUND IN THE LOCATION %d\n",i+1);
//			break;
//		}
//	}
//	if(i==N)
//	{
//		printf("\nTHE ELEMENT CANT NOT FOUND IN THE ANY LOCATION\n");
//	}
//}
//*/
//
//#include"stdio.h"
//main()
//{
//	int arr[] = {12,23,34,45,56,67,78,89,12,54};
//	int N = sizeof(arr)/sizeof(int);
//	int i = 0,count = 0;
//	printf("Serching The Element in the List \n\n");
//	for(;i<N;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n\n");
//	int s;
//	printf("Serching Element Location : ");
//	scanf("%d",&s);
//	for(i=0;i<N;i++)
//	{
//		if(arr[i]==s)
//		{
//			count++;
//			printf("\nTHE ELEMENT FOUND IN THE LOCATION %d",i+1);
//			if(count==2)
//			{
//				break;
//			}
//		}
//	}
//	if(i==N)
//	{
//		printf("\nTHE ELEMENT CAN NOT FOUND IN THE ANY LOCATION\n");
//	}
//}
//
//#include<stdio.h>
//main()
//{
//	int arr[] = {12,23,34,45,56};
//	int s = 0;
//	printf("Enter the serching number :- ");
//	scanf("%d",&s);
//	int i=0;
//	for(i=0;i<sizeof(arr)/sizeof(int);i++)
//	{
//			if(arr[i]==s)
//		{
//			printf("THIS ELEMENT FOUND IN LOCATION : %d",i+1);
//			break;
//		}
//		else 
//		{
//			printf("THIS ELEMENT IS NOT FOUND IN LOCATION");
//		}
//	}
//}














