class Main
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		System.out.print("Enter Octal Number :- ");

		int ocatl_number = sc.nextInt();

		int decimal_number = decimalConverter(ocatl_number);
		System.out.println("Decimal Number :- "+decimal_number);

		int[] arr = new int[8];

		arr = binaryConverter(decimal_number);

		System.out.print("Binary Number :- ");
		for(int i=arr.length-1;i>=0;i--)
		{
			System.out.print(arr[i]);
		}
	}

	public static int[] binaryConverter(int binary_number)
	{
		int i = 0;
		int[] oct_arr = new int[8];
		while(binary_number!=0)
		{
			int r = binary_number%2;
			oct_arr[i++] = r;
			binary_number/=2;
		}
		return oct_arr;
	}

	public static int decimalConverter(int num)
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
		// System.out.println(decimal);
		return decimal;
	}
}