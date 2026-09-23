import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		for(int i=1;i<=100;i++)
		{
			if(primeOrNot(i))
			{
				System.out.print(i+" ");
			}
		}
	}
	public static boolean primeOrNot(int num)
	{
		if(num<2)
		{
			return false;
		}
		else 
		{
			if(num==4)
			{
				return false;
			}
			int x = num/2;
			for(int i=2;i<x;i++)
			{
				if(num%i==0)
				{
					return false;
				}
			}
		}
		return true;
	}
}