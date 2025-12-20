//Can a number be expressed as a sum of two prime numbers using java
//Java program to check whether a number can be expressed as a sum of two prime numbers
import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		//scanner class declaration
		Scanner sc = new Scanner(System.in);
		//input from user
		System.out.print("Enter a number -: ");//14				
		int number = sc.nextInt();
		int x = 0;
		for(int i = 2 ; i <= number/2 ; i++)//2<=7//2<
		{
			if(prime_or_not(i) == 1)//1==1
			{
				if(prime_or_not(number-i) == 1)//
				{
					System.out.println(number+ " = "+i+" + "+(number-i));
					x = 1;
				}
			}
		}
		if(x == 0)
			System.out.println(+number+" cannot be expressed as a sum of two prime numbers");
	}
        //function for checking number is prime or not
	public static int prime_or_not(int n)//2//6
	{
		int c = 1;
		for(int i = 2 ; i < n ; i++)//2<2//2<6
		{
			if(n % i == 0)//
			{
				c = 0;
				break;
			}
		}
		return c;
	}
}