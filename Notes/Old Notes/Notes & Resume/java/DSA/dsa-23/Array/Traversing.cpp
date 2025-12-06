#include<stdio.h>
main()
{
	int arr[100];
	printf("Enter the Array Element");
	printf("\n------------------------\n");
	int i = 0;
	for(i=0;i<7;i++)
	{
		printf("%d index position -> ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n------------------------\n");
	printf("Traversing Of Array..!\n");
	printf("-------------------------\n");
	for(i=0;i<7;i++)
	{
		printf("%dth index position -> %d\n",i,arr[i]);
	}
}
