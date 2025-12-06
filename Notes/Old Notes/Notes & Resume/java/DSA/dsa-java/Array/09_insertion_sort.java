// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		int[] arr = new int[]{12,23,9,45,78,43,8};
// 		int n = arr.length;
// 		System.out.println("Before the sorting of array..");
// 		for(int i:arr)
// 		{
// 			System.out.print(i+" ");
// 		}
// 		System.out.println("\nAfter the sorting of array..");
// 		int key = 0;
// 		int j = 0;
// 		for(int i=1;i<n;i++)//12,23,9,45,78,43,8
// 		{
// 			key = arr[i];
// 			j = i - 1;
// 			while(j>=0 && arr[j]>key)
// 			{
// 				arr[j+1] = arr[j];
// 				j--;
// 			}
// 			arr[j+1] = key;
// 		}
// 		for(int i:arr)
// 		{
// 			System.out.print(i+" ");
// 		}
// 	}
// }


class Demo
{
	public static void main(String[] args)
	{
		int[] arr = new int[]{12,56,9,45,8,89,34,23};
		int n = arr.length;

		printArray(arr,n);
		insertionSort(arr,n);
		printArray(arr,n);
	}

	static void printArray(int[] arr,int n)
	{
		for(int i:arr)
		{
			System.out.print(i+" ");
		}
		System.out.println();
	}

	static void insertionSort(int[] arr,int n)
	{
		int key = 0;
		int j = 0;

		for(int i=1;i<n;i++)
		{
			key = arr[i];
			j = i - 1;
			while(j>=0 && arr[j]>key)
			{
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1] = key; 
		}
	}
}