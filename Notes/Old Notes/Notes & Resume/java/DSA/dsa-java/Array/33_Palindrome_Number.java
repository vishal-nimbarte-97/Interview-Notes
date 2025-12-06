//palindrom number
//number = 121
//reverse number = 121
//number is palindrom number

class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num = sc.nextInt();
		int t_num = num;
		int res = 0;
		int rem = 0;
		while(num!=0)
		{
			rem = num % 10;
			res = res * 10 + rem;
			num/=10;	
		}
		// System.out.println(res);
		// System.out.println(t_num);
		
		if(res==t_num)
		{
			System.out.println("Number is palindrom..!");
		}
		else 
		{
			System.out.println("Number is not palindrom..!");
		}
	}
}