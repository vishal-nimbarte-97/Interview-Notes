//Java program to add two fractions
import java.util.Scanner;
class Main
{
	public static void main(String[] args)
	{
		//scanner class declaration
		Scanner sc = new Scanner(System.in);
		//input from the user		
		System.out.print("Enter numerator for first fraction : ");		
		int num1 = sc.nextInt();//1
		System.out.print("Enter denominator for first fraction : ");		
		int den1 = sc.nextInt();//2
		System.out.print("Enter numerator for second fraction : ");		
		int num2 = sc.nextInt();//3
		System.out.print("Enter denominator for second fraction : ");		
		int den2 = sc.nextInt();//4
		int num, den, x;
		System.out.print("("+num1+" / "+den1+") + ("+num2+" / "+den2+") = ");
		//logic for calculating sum of two fractions
		if(den1 == den2)//2==4
		{
			num = num1 + num2 ;
			den = den1 ;
		}
		else
		{
			num = (num1*den2) + (num2*den1);//1*4+3*2=>10
			den = den1 * den2;//2*4=>8
		}
		if(num > den)//10>8
			x = num;//x=>10
		else
			x = den;
		for(int i = 1 ; i <= x ; i++)
		{
			if(num%i == 0 && den%i == 0)//10%2==0 && 8%2==0 
			{
				num = num/i;//5
				den = den/i;//4
			}
		}
		//logic for getting simplified fraction
		int n = 1;
		int p = num;//5
		int q = den;//4
		if( num != den)//5!=4
		{
			while(n != 0)//1!=0//1!=0
			{
				//storing remainder
				n = num % den;//5%4=>1	//4%1		
				if(n != 0)//1!=0
				{
					num = den;//4
					den = n;//1
				}
			}			
		}
		System.out.println("("+p/den+" / "+q/den+")");//5/1=>5 4/1=>4 , 5/4
		//closing scanner class(not compulsory, but good practice)
		sc.close();									
	}
}
