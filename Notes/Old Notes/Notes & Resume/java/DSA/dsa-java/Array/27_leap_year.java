// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);

// 		int year = sc.nextInt();
// 		// Leap year program in Java
// 		// If the year satisfies either of the conditions, it's considered a leap year -
// 		// 1. The year must be divisible by 400.
// 		// 2. The year must be divisible by 4 but not 100.
// 		if(year%400==0)
// 		{
// 			System.out.println("Leap Year");
// 		}
// 		else if(year%4==0 && year%100!=0)
// 		{
// 			System.out.println("Leap Year");
// 		}
// 		else 
// 		{
// 			System.out.println("Not Leap Year");
// 		}
// 	}
// }



//leap year or not
import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int yr = sc.nextInt();
		if (yr % 400 == 0) {
			System.out.println("Leap Year..!");
		} else if (yr % 4 == 0 && yr % 100 != 0) {
			System.out.println("Leap Year..!");
		} else {
			System.out.println("Not Leap Year..!");
		}
	}
}