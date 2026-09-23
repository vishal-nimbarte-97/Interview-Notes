//Area of Circle
import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the Radius => ");
		float redius = sc.nextFloat();
		System.out.println("Aria of Circle => "+(3.14*(float)Math.pow(redius,2)));

	}
}