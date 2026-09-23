
// import java.util.Scanner;
import java.util.Scanner;
class Demo
{
	static int res = 1;
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Base  : ");
		int base = sc.nextInt();
		System.out.print("Power : ");
		int power = sc.nextInt();
		int base_power = powerOfNumber(base,power);
		System.out.println("Base-Power : "+base+"^"+power+" : "+base_power);
	}
	public static int powerOfNumber(int base,int power)//3,2
	{
		res = res*base;//1*3=>3
		if(power>1)//2!=0
		{
			power--;
			powerOfNumber(base,power);
		}
		return res;
	}
}