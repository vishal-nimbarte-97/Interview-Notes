//Harshad Number
//21/2+1 => 7
//24/2+4 => 4
//153/1+5+3=> 17
//4991/4+9+9+1 => 217

// Example :

// Suppose a number 24 .
// Calculate the sum of digits of the number (2 + 4) = 6 .
// Check whether the number entered by user is completely 
//	 divisible by sum of its digits or not.

import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int t_num = num;
		int res = 0;
		int rem = 0;
		while(num!=0)//153//15//1//0
		{
			rem = num%10;//3//5//1
			res = res + rem;//3+5=>8+1=>9
			num = num / 10;//15//1//0
		}

		// int result = num/res;

		if(t_num%res==0)//153%9==0
		{
			System.out.println("Harshad Number..!");
		}
		else 
		{
			System.out.println("Not Harshad Number..!");
		}

	}
}