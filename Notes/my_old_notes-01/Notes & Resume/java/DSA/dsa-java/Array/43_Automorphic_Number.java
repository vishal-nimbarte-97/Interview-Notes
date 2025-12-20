// // 5 =(5)2 = 25
// // 6 = (6)2 = 36
// // 25 = (25)2 = 625
// // 76=(76)2 = 5776
// // 376 = (376)2 = 141376
// // 890625 = (890625)2 = 793212890625

import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc =new Scanner(System.in);
		int num = sc.nextInt();
		int sq = num * num;
		if(automaorphicNumber(num)==1)
		{
			System.out.println(num+" => "+sq+" This is the Automorphic Number..!");
		}
		else 
		{
			System.out.println(num+" => "+sq+" This is not Automorphic Number..!");
		}
	}
	public static int automaorphicNumber(int num)//25
	{
		int square = num * num;//625
		while(num!=0)//25//2
		{
			if(num%10 != square%10)//5!=5//2!=2
			{
				return 0;
			}
			num = num / 10;//2//0
			square = square / 10;//62//6
		}
		return 1;
	}
}


// public class Main
// {
// 	public static void main(String[] args) {
	   
// 	int n = 376, sq = n * n ;
//     if(isAutomorphic(n) == 1)
//         System.out.println("Num: "+ n + ", Square: " + sq + " - is Automorphic");
//     else
//         System.out.println("Num: "+ n + ", Square: " + sq + " - is not Automorphic");
	   
		
// 	}
	
// 	static int isAutomorphic(int n)//25
// 	{
//     int square = n * n;
//     while(n != 0)//25//2//0
//     {
//         // means not automorphic number
//         if(n % 10 != square % 10)//5!=625%10=> 5 != 5 2 != 2
//         {
//             return 0;
//         }
//         // reduce down numbers
//         n /= 10;//2//0
//         square /= 10;//62//6
//     }
//     // if reaches here means automorphic number
//     return 1;
// }
// }








