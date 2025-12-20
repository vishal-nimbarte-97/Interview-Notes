6-> 1 2 3 (divisible)

1 + 2 + 3 => 6 then perfect number

class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num = sc.nextInt();
		int per_num = 0;
		for(int i=1;i<num;i++)
		{
			if(num%i==0)
			{
				per_num = per_num + i;
			}
		}
		if(per_num==num)
		{
			System.out.println("Perfect Number..!");
		}
		else 
		{
			System.out.println("Not Perfect Number..!");
		}
	}
}