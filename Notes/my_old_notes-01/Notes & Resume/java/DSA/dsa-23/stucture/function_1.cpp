//function without return type and without argument
#include<stdio.h>
void calsi();
main()
{
	calsi();	
}

void calsi()
{
	int inp_num = 0, num_1 = 0, num_2 = 0;
	printf("1>Addition\n2>Substraction\n3>Multiplication\n4>Division");
	printf("\nEnter the Number    :- ");
	scanf("%d",&inp_num);
	printf("------------------------------------\n");
	printf("Enter Number First  :- ");
	scanf("%d",&num_1);
	printf("Enter Number Second :- ");
	scanf("%d",&num_2);
	switch(inp_num)
	{
		case 1:{
			printf("Addition :- %d",num_1+num_2);
			break;
		}
		
		case 2:{
			printf("Substraction :- %d",num_1-num_2);
			break;
		}
		
		case 3:{
			printf("Multiplication :- %d",num_1*num_2);
			break;
		}
		
		case 4:{
			printf("Division : %f",(float)num_1/(float)num_2);
			break;
		}
		
		default:printf("Invalide Number..! please try again..!");
	}
}
