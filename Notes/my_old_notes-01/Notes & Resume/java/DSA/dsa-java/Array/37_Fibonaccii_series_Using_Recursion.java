class Demo
{
	static int a = 0;
	static int b = 1;
	static int c = 0;

	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		int num = sc.nextInt();

		System.out.print(a+" "+b);
		fibonaciiFun(num-2);
	}

	public static void fibonaciiFun(int num)
	{
		if(num>0)
		{
			c = a + b;
			a = b;
			b = c;
			System.out.print(" "+c);
			fibonaciiFun(num-1);
		}
	}
}