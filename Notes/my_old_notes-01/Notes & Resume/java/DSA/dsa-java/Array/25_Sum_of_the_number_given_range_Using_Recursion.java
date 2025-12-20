class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();
		int res = 0;
		// for(int i=x;i<=y;i++)
		// {
		// 	res = res + i;
		// }
		// System.out.println(res);
		System.out.println(Demo.fun(x,y,res));
	}
	static int fun(int x,int y,int res)
	{
		if(x>y)
		{
			return res;
		}

		return x + fun(x+1,y,res);
	}
}