//sum of the nth natural number using recursion

// import java.util.Scanner;
// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		Scanner sc = new Scanner(System.in);
// 		int num = sc.nextInt();
// 		Demo d = new Demo();
// 		int res = d.fun(num);
// 		System.out.println(res);
// 	}
// 	int fun(int num)
// 	{
// 		if(num==0)
// 			return 0;
// 		return num+fun(num-1);
// 	}
// }

//sum of the Nth natural number by using recursion

import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();

		System.out.println((fun(num)));
	}

	public static int fun(int n) {
		if (n == 0)
			return 0;
		return n + fun(n - 1);
	}
}