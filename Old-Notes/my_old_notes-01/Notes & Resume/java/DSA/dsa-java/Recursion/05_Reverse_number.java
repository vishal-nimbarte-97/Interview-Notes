class Demo
{
	static int rem = 0;
	static int res = 0;
	public static void main(String[] args)
	{
		int num = 123456789;
		// int rem = 0;
		// int res = 0;
		// while(num!=0)
		// {
		// 	rem = num%10;//5
		// 	res = rem + res*10;//5
		// 	num = num / 10;
		// }
		// System.out.println(res);
		int reverse_number = reverseNumber(num);
		System.out.println("Reverse Number : "+reverse_number);
	}
	public static int reverseNumber(int num)
	{
		if(num!=0)//12345!=0
		{
			rem = num%10;//5
			res = rem + res*10;//5
			reverseNumber(num/10);
		}
		return res;
	}
}