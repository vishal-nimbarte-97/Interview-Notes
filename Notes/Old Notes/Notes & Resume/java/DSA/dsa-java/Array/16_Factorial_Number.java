class Demo
{
	public static void main(String[] args)
	{
		int n = 3;
		int fact = 1;
		for(int i=1;i<=n;i++)
		{
			fact = i * fact;
		}
		System.out.println(fact);
	}
}