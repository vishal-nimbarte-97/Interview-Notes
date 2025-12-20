// Example
// Input : 6 28
// Output : Yes, they are a friendly pair
// Explanation : The factors of 6 and 28 except the numbers themselves are 1, 2, 3 and 1, 2, 4, 7, 14 respectively.
// Now the sum of factors of both the numbers are 6 and 28 respectively. 
// When we divide the sums with the numbers we get 1 and 1 respectively. 
// As the ratio of both the number match, they are considered as a friendly pair.


class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		
		int num1 = sc.nextInt();//6
		int num2 = sc.nextInt();//28

		int res1 = divisibleNUmber(num1);//6
		int res2 = divisibleNUmber(num2);//28

		if(num1/res1 == num2/res2)
		{
			System.out.println("friendly pair..!");
		}
		else 
		{
			System.out.println("Not friendly pair..!");
		}

	}
	public static int divisibleNUmber(int num)//6
	{
		int res = 0;
		for(int i=1;i<num;i++)//1<6
		{
			if(num%i==0)//1,2,3
			{
				res = res + i;
			}
		}
		return res;
	}
}