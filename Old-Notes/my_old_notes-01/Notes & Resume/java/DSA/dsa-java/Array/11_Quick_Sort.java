class Demo
{
	public static void main(String[] args)
	{
		int[] arr = new int[]{12,90,43,23,9,67,55,32,56,67};
		int n = arr.length;
		printArray(arr,n);
		System.out.println();
		quickSortArray(arr,0,n-1);
		printArray(arr,n);
	}
	public static void printArray(int[] arr,int n)
	{
		for(int i:arr)
		{
			System.out.print(i+" ");
		}
	}
	public static void quickSortArray(int[] arr,int first,int last)
	{
		int pivot = first;
		int p = first;
		int q = last;
		int temp = 0;
		if(first<last)
		{
			while(arr[p]<=arr[pivot])
			{
				p++;
			}
			while(arr[q]>arr[pivot])
			{
				q--;
			}
			if(p<q)
			{
				temp = arr[p];
				arr[p] = arr[q];
				arr[q] = temp;
			}
		}
		temp = arr[pivot];
		arr[pivot] = arr[q];
		arr[q] = temp;

		//Recursing function
		// quickSortArray(arr,first,q-1);
		quickSortArray(arr,q+1,last);
	}
}