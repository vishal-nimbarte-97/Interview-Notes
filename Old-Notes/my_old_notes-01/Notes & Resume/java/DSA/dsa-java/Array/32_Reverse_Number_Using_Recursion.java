class Demo
{
	// static int res = 0;
	// static int rem = 0;
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		int num = sc.nextInt();
		int res = 0;
		System.out.println(fun(num,res));
	}

	public static int fun(int num,int res)//123 0, 12 3, 1 32, 0 321
	{
		if(num==0)//123==0 , 12==0 , 1==0 , 0==0
		{
			return res;
		}
		int rem = num%10;//rem=>3 , rem=>2 , rem=>1 
		res = res*10 + rem;//res =>3, res => 32 , res => 321

		return fun(num/10,res);//12,3 // 1, 32 // 0,321
	}
}