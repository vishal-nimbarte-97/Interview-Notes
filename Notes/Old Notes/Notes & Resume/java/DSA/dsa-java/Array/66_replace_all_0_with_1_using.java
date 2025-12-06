//Replace all 0's with 1 using Java
import java.util.Scanner;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);

		int num = sc.nextInt();
		int count = 0;
		int t_num = num;

		while(num!=0)//334//33//3
		{
			num = num / 10;//33//3//0
			count++;//1//2//3
		}

		int[] arr = new int[count];

		// System.out.println(arr.length);

		int rem = 0;
		int i = 0;
		while(t_num!=0)//334
		{
			rem = t_num % 10;//4
			arr[i++] = rem;
			t_num/=10;
		}
		for(int j=i-1;j>=0;j--)
		{
			if(arr[j]==0)
			{
				arr[j] = 1;
			}
			System.out.print(arr[j]);
		}
	}
}