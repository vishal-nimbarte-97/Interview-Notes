//19_All_the_zero_in_array_back_side.java
// Example 1 :

// N=8 and arr = [4,5,0,1,9,0,5,0].

// There are 3 empty packets in the given set. These 3 empty packets represented as O should be pushed towards the end of the array

// Input :

// 8  – Value of N

// [4,5,0,1,9,0,5,0] – Element of arr[O] to arr[N-1],While input each element is separated by newline

// Output:

// 4 5 1 9 5 0 0 0

import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();

		int[] arr = new int[N];
		for(int i=0;i<N;i++)
		{
			arr[i] = sc.nextInt();
		}

		// 4,5,0,1,9,0,5,0
		// 4 5 1 9 5 0 0 0
		int count = 0;
		for(int i=0;i<N;i++)
		{
			if(arr[i]!=0)
			{
				arr[count++] = arr[i];
			}
		}
		// System.out.println("count : "+count);
		for(int i=count;i<N;i++)
		{
			arr[i] = 0;
		}

		for(int i=0;i<N;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
}

// import java.util.*;
// class Main
// {
//     public static void main(String[] args)
//     {
//             Scanner sc=new Scanner(System.in);
//             int n=sc.nextInt();
//             int arr[]=new int[n];
//             for(int i=0;i< n;i++)
//                   arr[i]=sc.nextInt();
//         // 4,5,0,1,9,0,5,0
// // 		// 4 5 1 9 5 0 0 0
//             int count=0;
//             for(int i=0;i< n;i++)//8<8
//             {
//             	if(arr[i]!=0)//
//             	{
//                     arr[count++]=arr[i];//count = count + 1;
//                     // arr[0] = arr[0] => 4
//                     // arr[1] = arr[1] => 5
//                     // arr[2] = arr[3] => 1
//                     // arr[3] = arr[4] => 9
//                     // arr[4] = arr[6] => 5
//                     // arr[5] = 
//             	}
//             }

//              for(int i=count;i < n;i++)//i=5 5<8
//              {
//              	 //arr[5] = 0;
//              	 //arr[6] = 0;
//              	 //arr[7] = 0;
//                  arr[i]=0;
//              }


//              for(int i=0;i< n;i++)
//              {
//                     System.out.print(arr[i]+" ");
//              }
//     }
// }