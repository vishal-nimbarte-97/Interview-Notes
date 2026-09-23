//Updation
class Demo
{
	public static void main(String[] args)
	{
		int arr[] = new int[]{12,23,33,45,56};
		int index = 3;
		int element = 99;
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();
		arr[index] =element;
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
}