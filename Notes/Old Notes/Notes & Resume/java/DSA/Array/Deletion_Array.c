//Delation Array in data structure
#include"stdio.h"
main()
{
  int arr[] = {12,23,34,45,64};
  int N = sizeof(arr)/sizeof(int);
  int index = 1;
  int i = index - 1;
  int k = 0;
  printf("Before the deletion\n\n");
  while(k<=N-1)
  {
    printf("%d ",arr[k]);
	k++;  	
  }	
  printf("\n");
  
  //algorithm used
  while(arr[i]!=NULL)
  {
   arr[i] = arr[i+1];
   i++;
  }
  
  arr[i] = NULL;//the empty data can be the NULL
  
  N = N - 1;
  
  printf("\nAfter the deletion algorithm\n\n");
  k = 0;
  do
  {
  	printf("%d ",arr[k]);
  	k++;
  }
  while(k<=N-1);
}


//user define delete the array in element
/*
#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,56,67,78,89};
	int k = 0,N = sizeof(arr)/sizeof(int);
	printf("Before the Deletion Algorithm\n\n");
	for(k=0;k<N;k++)
	{
		printf("%d ",arr[k]);
	}
	printf("\n\n");
	int d ;
	printf("Enter the index number delete : ");
	scanf("%d",&d);
	printf("\n");
	int i = d-1;
	while(arr[i]!=NULL)
	{
		arr[i] = arr[i+1];
		i++;
	}
	arr[i] = NULL;
	N = N - 1;
	printf("After the deletion algorithm\n\n");
	for(k=0;k<N;k++)
	{
		printf("%d ",arr[k]);
	}
}
*/
