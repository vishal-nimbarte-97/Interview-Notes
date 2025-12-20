// import java.util.Scanner;
// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		Scanner sc = new Scanner(System.in);
// 		int year = sc.nextInt();
// 		if(year%4==0)
// 		{
// 			System.out.println("Leap Year..!");
// 		}
// 		else 
// 		{
// 			System.out.println("Not Leap Year..!");
// 		}
// 	}
// }

import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int month = sc.nextInt();
		int year = sc.nextInt();

		if((month==2) && year%4==0)
		{
			System.out.println("Number of days is 29.");
		}
		else if(month==2)
		{
			System.out.println("Number of days is 28.");
		}
		else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		{
			System.out.println("Number of days is 31.");
		}
		else 
		{
			System.out.println("Number of days is 30.");
		}
	}
}