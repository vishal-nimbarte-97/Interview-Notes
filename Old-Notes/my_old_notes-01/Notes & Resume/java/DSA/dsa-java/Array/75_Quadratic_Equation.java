// x = (-b ± √(b² - 4ac)) / (2a)
import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("a : ");
		int a = sc.nextInt();
		System.out.print("b : ");
		int b = sc.nextInt();
		System.out.print("c : ");
		int c = sc.nextInt();
		quadraticEquatioin(a,b,c);
	}
	public static void quadraticEquatioin(int a,int b,int c)
	{
		if(a==0)
		{
			System.out.println("Invalide..!");
		}
		else 
		{
			
		int in_root = b*b - 4 * a * c;
		// System.out.println(in_root);
		double sqr_root = Math.sqrt(in_root);
		// System.out.println(sqr_root);
		//a = 2 , b = 5 and c = 2
		double x = -b+sqr_root;
		double y = -b-sqr_root;

		int z = 2*a;

		System.out.println("x = "+(x/z) +" and x = "+(y/z));
		}
	}
}