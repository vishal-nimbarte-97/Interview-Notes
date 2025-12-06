class Demo
{
	public static void main(String[] args)
	{
		int a = 16;
		int b = 10;
		System.out.println("Answer => "+hcfFunction(a,b));
	}
	public static int hcfFunction(int a,int b)
	{
		if(b==0)
		{
			return a;
		}

		return hcfFunction(b,a%b);
	}
}