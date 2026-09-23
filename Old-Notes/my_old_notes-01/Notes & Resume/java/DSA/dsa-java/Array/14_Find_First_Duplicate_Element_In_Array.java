//first logic

// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		int[] arr = new int[]{12,32,45,12,32,45,78};
// 		int n = arr.length;
// 		System.out.print("First Duplicate Element :- ");
// 		outer:
// 		for(int i=0;i<n;i++)
// 		{
// 			for(int j=i+1;j<n;j++)
// 			{
// 				if(arr[i]==arr[j])
// 				{
// 					System.out.print(arr[i]+" ");
// 					break outer;
// 				}
// 			}
// 		}
// 	}
// }

//second logic

class Demo
{
	public static void main(String[] args)
	{
		int[] arr = new int[]{12,23,34,12,34,23};
		int n = arr.length;

		int temp = 0;
		System.out.print("First Duplicate Element is ");
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					temp++;
					System.out.print(arr[i]);
					break;
				}
			}
			if(temp==1)
			{
				break;
			}
		}
	}
}