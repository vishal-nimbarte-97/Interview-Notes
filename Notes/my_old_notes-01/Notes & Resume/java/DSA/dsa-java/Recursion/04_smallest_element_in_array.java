//Smallest element in array with used the recurssion conecpt
class Demo
{
	public static void main(String[] args)
	{
		int[] arr = new int[]{12,23,34,-7,32,-45,56,34,-(-90)};
		int n = arr.length;
		int small_element = smallElementInArray(arr,n);
		System.out.println("Smallest Element of an Array : "+small_element);
	}
	public static int smallElementInArray(int[] arr,int n)
	{
		if(n==1)
		{
			return arr[0];
		}

		return (int)Math.min(arr[n-1],smallElementInArray(arr,n-1));
	}
}