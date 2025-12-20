// //Positive or Nagative Number
// // import java.util.Scanner;
// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);
// 		int num = sc.nextInt();
// 		// if(num==0)
// 		// {
// 		// 	System.out.println("Natural Number");
// 		// }

// 		// else if(num>0)
// 		// {
// 		// 	System.out.println("Positive Number");
// 		// }
// 		// else 
// 		// {
// 		// 	System.out.println("Nagetive Number");
// 		// }

// 		//Using Ternory Operator
// 		String res = (num==0)?("Natural Number"):
// 					 (num>0)?("Number is Positive"):
// 					 	     ("Number is Negative");
// 		System.out.println(res);
// 	}
// }

//cheack number is positive or not
import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		String result = (num < 0) ? ("Negative") : ("Positive");
		System.out.println((result));
	}
}