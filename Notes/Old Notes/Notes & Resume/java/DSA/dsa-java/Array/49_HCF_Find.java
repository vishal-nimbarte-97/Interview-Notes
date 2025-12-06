// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);

// 		int num_1 = sc.nextInt();
// 		int num_2 = sc.nextInt();
// 		int hcf = 0;

// 		for(int i=1;i<=num_1||i<=num_2;i++)
// 		{
// 			if(num_1%i==0 && num_2%i==0)
// 			{
// 				hcf = i;
// 			}
// 		}
// 		System.out.println(hcf);
// 	}
// }

// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);
// 		int num_1 = sc.nextInt();
// 		int num_2 = sc.nextInt();
// 		int num_3 = sc.nextInt();
// 		int hcf = 0;
// 		for(int i=1;i<=num_1 || i<=num_2 || i<=num_3 ;i++)
// 		{
// 			if(num_1%i==0 && num_2%i==0 && num_3%i==0)
// 			{
// 				hcf = i;
// 			}
// 		}
// 		System.out.println(hcf);
// 	}
// }

// class Main
// {
//   public static void main (String[]args)
//   {
//     int num1 = 36, num2 = 60, hcf;

//     while (num1 != num2)//36!=60 //36!=24 //12!=24 //12!=12
//     {
//         if (num1 > num2)//36>60//36>24//12>24
//             num1 = num1 - num2;//12
//         else
//             num2 = num2 - num1;//24//12
//     }

//     System.out.println("The HCF: "+ num1);
//   }
// }


class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		int num_1 = sc.nextInt();
		int num_2 = sc.nextInt();

		while(num_1!=num_2)
		{
			if(num_1>num_2)
			{
				num_1 = num_1 - num_2;
			}
			else 
			{
				num_2 = num_2 - num_1;
			}
		}

		System.out.println("HCF :- "+num_1);
	}
}