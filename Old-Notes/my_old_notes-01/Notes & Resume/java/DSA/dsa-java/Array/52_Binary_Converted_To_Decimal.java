// //1010 => 10
// //10 => 2

// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);
// 		int num = sc.nextInt();

// 		int decimal = 0;
// 		int rem = 0;
// 		int count = 0;

// 		while(num>0)
// 		{
// 			rem = num%10;

// 			decimal = decimal + rem*(int)Math.pow(2,count);

// 			num = num / 10;

// 			count++;
// 		}

// 		System.out.println("Decimal Number : "+decimal);
// 	}
// }

// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);

// 		System.out.print("Enter Binary Number :- ");

// 		int num = sc.nextInt();

// 		int decimal = 0;

// 		int rem = 0;

// 		int count = 0;

// 		while(num>0)
// 		{
// 			rem = num%10;

// 			decimal = decimal + rem*(int)Math.pow(2,count);

// 			num = num / 10;

// 			count++;
// 		}

// 		System.out.println("Decimal Number :- "+decimal);
// 	}
// }


class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		int binary_number = sc.nextInt();//1010

		int rem = 0;
		int count = 0;
		int decimal_number = 0;
		while(binary_number>0)//1010//101//10//1
		{
			rem = binary_number % 10;//0//1//0//1
			decimal_number = decimal_number + rem*(int)Math.pow(2,count);//0//0+1*2=>2//2+0=>2//2+1*8=>10
			binary_number = binary_number / 10;//101//10//1
			count++;//1//2//3
		}

		System.out.println(decimal_number);
	}
}













