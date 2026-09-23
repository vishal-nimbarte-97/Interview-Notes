// ArmStrong Number Between two Number
//371 => 3^3 + 7^3 + 1^3 => 27 + 343 + 1 => 371

class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		int low = sc.nextInt();
		int high = sc.nextInt();

		System.out.print(low+" to "+high+" between ArmStrong Number : ");

		for(int i=low;i<=high;i++)
		{
			int len = lenFun(i);//1
			int rem = 0;
			int res = 0;
			int temp = i;//1
			while(temp!=0)//1!=0,0!=0
			{
				rem = temp%10;//1
				res = res + (int)Math.pow(rem,len);//0+1=>1
				temp/=10;//0
			}

			if(res==i)//1==1
			System.out.print(res+" ");
		}
	}
	public static int lenFun(int x)
	{
		int count = 0;
		while(x!=0)
		{
			count++;
			x/=10;
		}
		return count;
	}
}