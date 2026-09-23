//using bitwise operator
class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num = sc.nextInt();
		// if(num%2==0)
		// {
		// 	System.out.println("Even Number");
		// }
		// else 
		// {
		// 	System.out.println("Odd Number");
		// }

		//using ternory operator
		String res = (num%2==0)?("Number is even"):("Number is odd");
		System.out.println(res);
	}
}