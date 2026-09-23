
//Sum of the nth natural number
class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num = sc.nextInt();

		//Sum of Nth Natural Number Formula
		//Nth NUmber SuM = n*(n+1)/2

		// System.out.println(num*(num+1)/2);


		//second logic 
		int count = 0;
		for(int i=1;i<=num;i++)
		{
			count = count + i;
			// System.out.println(count);
		}
		System.out.println(count);
	}
}
