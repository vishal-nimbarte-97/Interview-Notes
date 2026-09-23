//Strong Number
//145
//1! + 4! + 5! 
//1 + 24 + 120 => 145 then strong number
class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num = sc.nextInt();//145
		int t_num = num;
		// int res = 0;
		int rem = 0;
		int strong_num = 0;
		while(num!=0)//145 , 14 , 1
		{
			int res = 1;//0 , 0
			rem = num%10;//5 , 4 , 1
			for(int i=1;i<=rem;i++)//5<=5 , 4<=4 , 1<=1 
			{
				res = res * i;//1*2*3*4*5 , 1*2*3*4 , 1*1
			}
			strong_num = strong_num + res;//120+24+1 => 145
			num/=10;//14 , 1 , 0
		}
		if(t_num==strong_num)
		{
			System.out.println("Strong Number..!");
		}
		else 
		{
			System.out.println("Not Strong Number..!");
		}
	}
}
