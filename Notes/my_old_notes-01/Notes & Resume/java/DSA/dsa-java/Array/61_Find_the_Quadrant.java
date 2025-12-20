import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int x_co = sc.nextInt();
		int y_co = sc.nextInt();
		if(x_co>0 && y_co>0)
		{
			System.out.println("I Quadrant..!");
		}
		else if(x_co<0 && y_co>0)
		{
			System.out.println("II Quadrant..!");
		}
		else if(x_co<0 && y_co<0)
		{
			System.out.println("III Quadrant..!");
		}
		else if(x_co>0 && y_co<0)
		{
			System.out.println("IV Quadrant..!");
		}
		else if(x_co==0 && y_co==0)
		{
			System.out.println("Origine..!");
		}
		else if(y_co==0 && x_co!=0)
		{
			System.out.println("X-Axis..!");
		}
		else  
		{
			System.out.println("Y-Axis..!");
		}
	}
}