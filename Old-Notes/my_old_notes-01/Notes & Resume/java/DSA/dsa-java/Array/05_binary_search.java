// //binary search alorithm
// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		int arr[] = new int[]{12,23,34,45,56,67};
// 		for(int i=0;i<arr.length;i++)
// 		{
// 			System.out.print(arr[i]+" ");
// 		}
// 		System.ouat.println();
// 		int beg = 0;
// 		int end = arr.length-1;
// 		int mid = 0;
// 		int search = 23;
// 		while(beg<=end)
// 		{
// 			mid = (beg+end)/2;
// 			if(arr[mid]==search)
// 			{
// 				System.out.print("The element can found in location "+(mid+1));
// 				break;
// 			}
// 			else if(search>arr[mid])
// 			{
// 				beg = mid + 1;
// 			}
// 			else if(search<arr[mid])
// 			{
// 				end = mid - 1;
// 			}
// 		}
// 	}
// }

class Demo
{
	public static void main(String[] args)
	{
		int[] arr = new int[]{2,4,6,8,10,12,14,16,18};
		int search = 30;
		int low = 0 ;
		int high = arr.length-1;
		int mid = 0;
		while(low<=high)
		{
			mid = (low+high)/2;
			if(arr[mid]==search)
			{
				System.out.println("the element can found in location "+(mid+1));
				break;
			}
			else if(search>arr[mid])
			{
				low = mid + 1;
			}
			else if(search<arr[mid])
			{
				high = mid - 1;
			}

			if(low>high)
			{
				System.out.println("The element can not found..!");
			}
		}
	}
}



















