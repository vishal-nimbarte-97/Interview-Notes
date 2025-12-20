//deletion
class Demo
{
	public static void main(String[] args)
	{
		int arr[] = new int[]{12,23,34,45,56};
		int n = arr.length;
		for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();
		//logic of deletion
		int index = 3;
		for(int i=index;i<n-1;i++)
		{
			arr[i] = arr[i+1];
		}
		// arr[n] = '\0';
		// arr[n] = 0;
		for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
}