// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);

// 		int x = sc.nextInt();

// 		//1 3 5 7 11 13 17 19 its prime number

// 		//0 and 1 it's not prime number
// 		// System.out.println(45%5);
// 		boolean b = true;
// 		if(x<2)
// 		{
// 			// System.out.println("It's Not Prime Number");
// 			b = false;
// 		}
// 		else
// 		{
// 			for(int i=2;i<x;i++)
// 			{
// 				if(x%i==0)
// 				{
// 					// System.out.println("It's Not Prime Number");
// 					b = false;
// 					break;
// 				}
// 			}
// 		}
// 		// else  
// 		// {
// 		// 	System.out.println("It's Prime Number");
// 		// }
// 		if(b==true)
// 		{
// 			System.out.println("It's Prime Number");
// 		}
// 		else
// 		{
// 			System.out.println("It's Not Prime Number");
// 		}

// 	}
// }

//cheack number is prime or not
import java.util.Scanner;;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();

		boolean flag = false;
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				flag = true;
			}
		}
		if (flag) {
			System.out.println("Not a Prime Number");
		} else {
			System.out.println("Prime Number..!");
		}
	}
}