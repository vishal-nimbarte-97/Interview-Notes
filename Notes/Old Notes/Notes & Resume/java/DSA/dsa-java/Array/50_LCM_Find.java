// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);

// 		int num_1 = sc.nextInt();
// 		int num_2 = sc.nextInt();

// 		int hcf = 0;

// 		for(int i=1;i<=num_1 && i<=num_2;i++)
// 		{
// 			if(num_1%i==0 && num_2%i==0)
// 			{
// 				hcf = i;
// 			}
// 		}

// 		int lcm = (num_1*num_2)/hcf;

// 		System.out.println("LCM :- "+lcm);
// 	}
// }

class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num_1 = sc.nextInt();
		int x = num_1;//2
		int num_2 = sc.nextInt();
		int y = num_2;//4

		while(num_1!=num_2)//2!=4///2!=2
		{
			if(num_1>num_2)//2>4
			{
				num_1 = num_1 - num_2;
			}
			else 
			{
				num_2 = num_2 - num_1;//2
			}
		}

		int lcm = (x*y)/num_1;//8/2==>4


		System.out.println("LCM :- "+lcm);
	}
}