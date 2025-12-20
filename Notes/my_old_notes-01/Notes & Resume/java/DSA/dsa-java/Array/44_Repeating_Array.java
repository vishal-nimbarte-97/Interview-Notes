import java.util.*;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();

		int[] arr = new int[num];
		for(int i=0;i<num;i++)
		{
			arr[i] = sc.nextInt();
		}
		repeatingArray(arr,num);
	}
	public static void repeatingArray(int[] arr,int num)
	{
		int i,j;
		System.out.println("Repeating Element in Array : ");
		for(i=0;i<num-1;i++)
		{
			for(j=i+1;j<num;j++)
			{
				if(arr[i]==arr[j])
				{
					Arrays.sort(arr);
					System.out.println(arr[i]);
				}
			}
		}
	}
}