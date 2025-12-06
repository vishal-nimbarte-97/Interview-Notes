class Demo
{
	public static void main(String[] args)
	{
		int[] arr = new int[]{9,0,7,11,5};
		int n = arr.length;

		System.out.println("Before the Sorting..");
		PrintingTheArray.printArray(arr,n);
		SelectionSortAlgorithm.selectionSort(arr,n);
		System.out.println("After the Sorting..");
		PrintingTheArray.printArray(arr,n);
	}
}
class SelectionSortAlgorithm
{
	public static void selectionSort(int[] arr,int n)
	{
		int min = 0;
		int temp = 0;       

		//dry run
		//0, 1, 2, 3,  4
		//9, 0, 7, 11, 5

		//first round
		//0, 1, 2, 3,  4
		//0, 9, 7, 11, 5

		//second round
		//0, 1, 2, 3,  4
		//0, 5, 7, 11, 9

		//third round
		//0, 1, 2, 3,  4
		//0, 5, 7, 11, 9		
		
		//forth round
		//0, 1, 2, 3,  4
		//0, 5, 7, 9, 11
		
		for(int i=0;i<n;i++)
		{
			min = i;//0//1//2//3
			for(int j=i+1;j<n;j++)//j=1//j=2//j=3//j=4
			{
				if(arr[j]<arr[min])//1<0//2<1//3<1//4<1 => 2<1//3<2//4<2 => 3<2//4<2 => 4<3
				{
					min = j;//min=1 || min=2//min=4 || min = 4
				}
			}
			temp = arr[i];//4&1 || 4&3
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}
class PrintingTheArray
{
	public static void printArray(int[] arr,int n)
	{
		for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}
}