//Abundant_Number

// sum(n)> n
// abundance =  sum(n) - n


class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num = sc.nextInt();//18

		int res = 0;//0

		for(int i=1;i<num;i++)//1<18
		{
			if(num%i==0)//1, 2, 3, 6 ,9 and not itself used 
			{
				res = res + i;//1+2+3+6+9 = 21
			}
		}

		if(res>num)//21>18
		{
			System.out.println("Abundant Number");
		}
		else 
		{
			System.out.println("Not Abundant Number");
		}
	}
}