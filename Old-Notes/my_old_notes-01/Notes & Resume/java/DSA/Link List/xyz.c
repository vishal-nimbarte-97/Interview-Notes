#include<stdio.h>
main()
{
	char ch[26];
	char c;
	int i = 0;
	for(i=1;i<=26;i++)
	{
		ch[i] = 64 + i;
	}
	printf("Enter the Charactor = ");
	scanf("%c",&c);
	for(i=1;i<=26;i++)
	{
		//printf("%c ",ch[i]);
		if(ch[i]==c)
		{
			printf("Location - %d",i);
		}
	}
}
