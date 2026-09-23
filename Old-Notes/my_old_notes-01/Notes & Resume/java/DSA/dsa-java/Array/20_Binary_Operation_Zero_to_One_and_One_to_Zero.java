// // 20_Binary_Operation_Zero_to_One_and_One_to_Zero.java
// import java.util.*;
// class Main
// {
//   public static void main(String[] args)
//   {
//          Scanner sc=new Scanner(System.in);
//          int no=sc.nextInt();
//           String bin="";
         
//           while(no!=0)
//            {
//                   bin=(no&1)+bin;
//                   no=no>>1;
//            }
//             bin=bin.replaceAll("1","2");
//             bin=bin.replaceAll("0","1");
//             bin=bin.replaceAll("2","0");
//             int res=Integer.parseInt(bin,2);
//            System.out.println(res);
//    }
// }

// input :- 10
// 10 converted to binary formate -> 1010
// 1010 converted to -> 0101 i.e 1->0 and 0->1

import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();

		//user input converted to the binary formate
		String x = "";
		String y = "";
		for(int i=3;i>=0;i--)
		{
			int k = n>>i;
			if((k & 1)>0)
			{
				//1
				x = x+"1";
				y = y+"0";
			}
			else 
			{
				//0
				x = x+"0";
				y = y+"1";
			}
		}

		// System.out.println(x);
		// int len = x.length();
		// int ans = 0;
		// int p = 0;
		// // String y = "";

		// //1 converted to 0
		// //0 converted to 1

		// // for(int i=len-1;i>=0;i--)
		// // {
		// // 	if(x.charAt(i)=='0')
		// // 	{
		// // 		y = y + "0";
		// // 	}
		// // 	else 
		// // 	{
		// // 		y = y + "1";
		// // 	}
		// // }

		// System.out.println(y);
		
		int len = x.length();
		int ans = 0;
		int p = 0;

		for(int i=len-1;i>=0;i--)
		{
			if((y.charAt(i))!='0')
			{
				ans = ans + (int)Math.pow(2,p);
			}
			p++;
		}
		System.out.println(ans);
	}
}






