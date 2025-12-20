class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		int num = sc.nextInt();

		int len = lenFun(num);

		// System.out.println(len);

		if(armStrongFun(num,len))
		{
			System.out.println(num+" is ArmStrong Number");
		}
		else 
		{
			System.out.println(num+" is not ArmStrong Number");
		}
	}

	static int lenFun(int x)
	{
		int count = 0;
		while(x!=0)
		{
			count++;
			x = x / 10;
		}
		return count;
	}

	static boolean armStrongFun(int num,int len)
	{
		int sum = 0;
		int t_num = num;
		int rem = 0;
		while(num!=0)
		{
			rem = num%10;
			sum = sum + (int)Math.pow(rem,len);
			num/=10;
		}
		System.out.println(sum);
		return sum == t_num;
	}
}