class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int x = sc.nextInt();
		int fact = 1;
		for(int i=1;i<=x;i++)
		{
			fact = fact * i;
		}
		System.out.println(x+"! => "+fact);
	}
}