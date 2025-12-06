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

		int r1 = n-r;

		int rr = 1;
		for(int i=1;i<=r;i++)
		{
			rr = rr * i;
		}

		for(int i=1;i<=r1;i++)
		{
			r1 = r1 * i;
		}

		System.out.println("Combination :- "+(nn/(r1*rr)));
	}
}