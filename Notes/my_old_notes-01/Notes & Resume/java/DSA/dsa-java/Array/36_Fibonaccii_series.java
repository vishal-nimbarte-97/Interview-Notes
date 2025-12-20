class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		int num = sc.nextInt();

		int a = 0;
		int b = 1;
		int c = 0;

		System.out.print(a+" "+b);

		for(int i=0;i<num-2;i++)
		{
			c = a + b;
			a = b;
			b = c;
			System.out.print(" "+c);
		}
	}
}