//funtion and pointer
#include<stdio.h>
#include<string.h>
main()
{
		char *ptr;
		char *fun();
		fun();
		ptr = fun();
		printf("\n%s",ptr);
}

char *fun()
{
	char disk[100];
	strcpy(disk,"Memory alocation..!");
	printf("%s",disk);
	return disk;
}
