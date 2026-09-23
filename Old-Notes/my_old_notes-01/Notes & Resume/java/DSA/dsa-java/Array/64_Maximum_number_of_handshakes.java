// Maximum number of handshakes for 30 people are 435

import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);

		System.out.print("How Many person :- ");
		long person = sc.nextInt();

		long pp = 1;

		for(int i=1;i<=person;i++)
		{
			pp = pp * i;
		}

		long rr = 1;//28

		for(int i=1;i<=person - 2;i++)
		{
			rr = rr * i;
		}

		System.out.println("Number of Handshake :- "+(pp/(2*rr)));

	}
}