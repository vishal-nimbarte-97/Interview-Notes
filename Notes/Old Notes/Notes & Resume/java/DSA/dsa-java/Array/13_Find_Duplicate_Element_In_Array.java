// class Demo {
// 	public static void main(String[] args) {
// 		int[] arr = new int[] { 12, 12, 23, 34, 45, 34, 67 };

// 		int n = arr.length;

// 		System.out.print("Duplicate Element is : ");
// 		for (int i = 0; i < n; i++) {
// 			for (int j = i + 1; j < n; j++) {
// 				if (arr[i] == arr[j] && i != j) {
// 					System.out.print(arr[i] + " ");
// 				}
// 			}
// 		}
// 	}
// }

// Duplicate element in array

class Demo
{
	public static void main(String[] args)
	{
		int[] arr = new int[]{12, 12, 23, 34, 45, 34, 67};
		for(int i=0;i<arr.length;i++)
		{
			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[i]==arr[j])
				{
					System.out.println(arr[i]+" ");
				}
			}
		}
	}
}



