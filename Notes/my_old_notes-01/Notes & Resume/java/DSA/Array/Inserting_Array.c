//Inserting the array in data structure
#include<stdio.h>
main()
{
	int arr[] = {12,23,34,45,65,89};
	int N = sizeof(arr)/sizeof(int);
	int index = 4;
	int element = 99;
	int z = 0;
	printf("Before the Array inserting :\n\n");
	for(z=0;z<N;z++)
	{
		printf("%d ",arr[z]);
	}
	printf("\n\n\n");
	int i = N - 1;
	while(i>=index-1)
	{
		arr[i+1] = arr[i];
		i--;
	}
	arr[index-1] = element;
	N = N + 1;
	printf("Array the Array inserting :\n\n");
	for(z=0;z<N;z++) 
	{
		printf("%d ",arr[z]);
	}
}
