// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);

// 		System.out.print("Enter Octal Number :- ");//

// 		int octal = sc.nextInt();//12

// 		int decimal = 0;

// 		int n = 0;

// 		while(octal>0)//12>0//1>0
// 		{
// 			int rem = octal%10;//2//1

// 			decimal = decimal + rem*(int)Math.pow(8,n);//0+2*1=>2//2+1*8=>10

// 			octal = octal / 10;//1

// 			n++;
// 		}

// 		System.out.println("Decimal Number :- "+decimal);//10
// 	}
// }

class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		int num = sc.nextInt();

		System.out.println(convertNum(num));
	}
	public static int convertNum(int num)
	{
		int rem = 0;
		int count = 0;
		int decimal = 0;
		while(num>0)//12
		{
			rem = num % 10;//2
			decimal = decimal + rem*(int)Math.pow(8,count);//0+2*1
			count++;
			num/=10;
		}
		return decimal;
	}
}
















