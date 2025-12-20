import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		if(primeOrNot(num,2))
		{
			System.out.println("It's Prime Number..!");
		}
		else 
		{
			System.out.println("Not Prime Number..!");
		}
	}
	public static boolean primeOrNot(int num,int i)
	{
	// 	if (n <= 2) 
       //     return (n == 2) ? true : false; 
       // if (n % i == 0) 
       //     return false; 
       // if (i * i > n)
       //      return true;
       //  // Check for next divisor
       //  return isPrime(n, i + 1);
		if(num<2)
		{
			return false;
		}
		else if(num==2)
		{
			return true;
		}

		if(num%i==0)
		{
			return false;
		}

		if(i*i>num)
		{
			return true;
		}

		return primeOrNot(num,i+1);


	}
}