
// import java.util.Scanner;
// // Largest Element in the array
// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		Scanner sc = new Scanner(System.in);
// 		int[] arr = new int[]{12,23,78,34,89,9,934,23};
// 		int max_val = largeElement(arr);
// 		System.out.println("Maximum Value of an Array : "+max_val);
// 	}
// 	public static int largeElement(int[] arr)
// 	{
// 		int max_val = arr[0];
// 		for(int i=1;i<arr.length;i++)
// 		{
// 			if(arr[i]>max_val)
// 			{
// 				max_val = arr[i];
// 			}
// 		}
// 		return max_val;
// 	}
// }

// //Largest Element of the array using Recursion in Java
// class Main
// {
//     public static int findMinimum(int A[], int n)//A,5//A,4//A,3//A,2
//     {
//       // if size = 0 means whole array has been traversed
//       if(n == 1)//5==1//4==1//
//         return A[0];
         
//         return Math.max(A[n-1], findMinimum(A, n-1));//max(,)
//     }
     
//     // Driver code
//     public static void main(String args[])
//     {
//         int A[] = { 15, 60, -6, 0, 2,90};
//         int n = A.length;//5
//         // Function calling
//         System.out.println("Smallest element in the array is: "+findMinimum(A, n));
//     }
// }

class Demo
{
	public static void main(String[] args)
	{
		int[] arr = new int[]{12,34,78,45,23,9340,56,92399,23,56,10};
		int n = arr.length;
		int large_element = findLargeElement(arr,n);
		System.out.println("Large Element :- "+large_element);
	}
	public static int findLargeElement(int[] arr,int n)
	{
		if(n==1)
		{
			return arr[0];
		}	

		return (int)Math.max(arr[n-1],findLargeElement(arr,n-1));
	}
}

















