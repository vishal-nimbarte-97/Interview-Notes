// //find the minimum and maximum element in the array
// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		int[] arr = new int[]{12,23,34,7,45,99,560,1,2,3,4};
// 		int g_number = arr[0];
// 		int s_number = arr[0];
// 		for(int i=1;i<arr.length;i++)
// 		{
// 			if(g_number<arr[i])
// 			{
// 				g_number = arr[i];
// 			}

// 			if(s_number>arr[i])
// 			{
// 				s_number = arr[i];
// 			}

// 		}
// 		System.out.println("Gretest element in array "+g_number);
// 		System.out.println("Smallest element in array "+s_number) ;
// 	}
// }

//find the maximum or minimum number in the array
import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		int[] arr = new int[] { 12, 23, 34, 7, 45, 99, 560, 1, 2, 3, 4 };
		int max = 0;
		int min = 0;
		for (int i = 0; i < arr.length; i++) {
			if (max < arr[i]) {
				max = arr[i];
			}
			if (min > arr[i]) {
				min = arr[i];
			}
		}
		System.out.println("Maximum Number : " + max);
		System.out.println("Minimum Number : " + min);
	}
}
