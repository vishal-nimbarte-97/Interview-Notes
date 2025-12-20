class Demo
{
	static int a = 2;
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int x = sc.nextInt();
		int i = 2;
		Demo d = new Demo();
		boolean b = d.fun(x,i);
		if(b)
		{
			System.out.println("It's Prime Number");
		}
		else 
		{
			System.out.println("It's Not Prime Number");
		}
	}
	boolean fun(int x,int i)
	{

		if(x<2)
		{
			return false;
		}
		if(x==i)
		{
			return true;
		}
		if(x%i==0)
		{
			return false;
		}
		i++;
		return fun(x,i);
	}
}