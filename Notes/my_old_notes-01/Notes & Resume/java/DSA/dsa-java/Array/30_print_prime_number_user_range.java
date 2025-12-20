// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);
// 		int num = sc.nextInt();

// 		// boolean b = true;
// 		for(int i=2;i<=num;i++)
// 		{
// 			// System.out.print(i+" ");
// 			if(fun(i))//2 3
// 			{
// 				System.out.print(i+" ");
// 			}
// 		}
// 	}

// 	static boolean fun(int num)//2
// 	{
// 		if(num<2)//2>2
// 		{
// 			return false;
// 		}
// 		else 
// 		{
// 			for(int i=2;i<num;i++)//2<2
// 			{
// 				if(num%i==0)
// 				{
// 					return false;
// 				}
// 			}
// 		}
// 		return true;//
// 	}
// }

// class Main
//  {
//    public static void main (String[]args)
//    {

//      int lower = 1, upper = 20;


//      for (int i = lower; i <= upper; i++)
//        if (isPrime (i))
//         System.out.println (i);
//    }

//    static boolean isPrime (int n)
//    {
//      // int count = 0;

//      // 0, 1 negative numbers are not prime

//      if (n < 2)
//        return false;

//      // checking the number of divisors b/w 1 and the number n-1
//      	for(int i = 2; i < n; i++)
//        {
//      	if (n % i == 0)
//         return false;
//        }

//      // if reached here then must be true
//      return true;
//    }
//  }


class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num = sc.nextInt();

		for(int i=2;i<=num;i++)
		{
			if(fun(i))
			{
				System.out.print(i+" ");
			}
		}
	}

	static boolean fun(int n)//2
	{
		if(n<2)
		{
			return false;
		}
		else 
		{
			for(int i=2;i<n;i++)
			{
				if(n%i==0)
				{
					return false;
				}
			}
		}

		return true;
	}

}




















