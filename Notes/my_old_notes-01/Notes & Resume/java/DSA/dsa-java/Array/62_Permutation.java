import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		int r = sc.nextInt();


		int nn = 1;
		for(int i=1;i<=n;i++)
		{
			nn = nn * i;
		}

		r = n - r;
		int rr = 1;

		for(int i=1;i<=r;i++)
		{
			rr = rr * i;
		}

		System.out.println("Permutation :- "+(nn/rr));
	}
}