// //Linear Serach Algorith
// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		int arr[] = new int[]{12,32,34,56,67,45,67,45,67,45};
// 		for(int i=0;i<arr.length;i++)
// 		{
// 			System.out.print(arr[i]+" ");
// 		}
// 		System.out.println();
// 		//logic
// 		int search = 45;
// 		int count = 1;
// 		for(int i=0;i<arr.length;i++)
// 		{
// 			if(arr[i]==search)
// 			{
// 				count++;
// 				if(count>2)
// 				System.out.println("THE "+search+" ELEMENT CAN FOUND IN LOCATION "+(i+1));
// 			}
// 		}
// 	}
// }

// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		int[] arr = new int[]{12,23,34,65,42,12,9};
// 		int search = -90;
// 		int count = 1;
// 		for(int i=0;i<arr.length;i++)
// 		{
// 			count++;
// 			if(arr[i]==search)
// 			{
// 				System.out.println("The element can found location "+(i+1));
// 				break;
// 			}
// 		}
// 		if(count>arr.length)
// 		{
// 			System.out.println("The element can not found..!");
// 		}
// 	}
// }

//linear search
//search number is present or not in array.
// import java.util.Scanner;

// class Demo {
// 	public static void main(String[] args) {
// 		Scanner sc = new Scanner(System.in);
// 		int[] arr = new int[] { 12, 23, 34, 65, 42, 12, 9 };
// 		int search = sc.nextInt();
// 		for (int i = 0; i < arr.length; i++) {
// 			if (search == arr[i]) {
// 				System.out.println("Number is found");
// 			}
// 		}
// 	}
// }