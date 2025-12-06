//Program to find N-th Fibonacci Number in java
class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num = sc.nextInt();
		int a = 0;
		int b = 1;
		int c = 0;
		int[] arr = new int[num];
		arr[0] = a;
		arr[1] = b;
		for(int i=2;i<num;i++)
		{
			c = a + b;
			a = b;
			b = c;
			arr[i]=b;
		}
		System.out.println(num+" present this Fibonacci Number -> "+arr[num-1]);
	}
}