// Example 1:

// Input:
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements 
// from 2nd position to 4th position 
// is 12.


// Example 2:

// Input:
// N = 10, S = 15
// A[] = {1,2,3,4,5,6,7,8,9,10}
// Output: 1 5
// Explanation: The sum of elements 
// from 1st position to 5th position
// is 15.

import java.util.*;
class Demo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int s = sc.nextInt();
		int[] arr = new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i] = sc.nextInt();
		}
		ArrayList<Integer> res = Demo.subArray(arr,n,s);
		// System.out.println("dsf");
		for(int i=0;i<res.size();i++)
		{
			System.out.print(res.get(i)+" ");
		}
	}

	public static ArrayList<Integer> subArray(int arr[],int n,int s)
	{
		ArrayList<Integer> numbers = new ArrayList<Integer>();
		for(int i=0;i<n;i++)
		{
			int current_sum = arr[i];
			if(current_sum==s)
			{
				numbers.add(i+1);
				return numbers;
			}
		    else 
		    {
		    	for(int j=i+1;j<n;j++)
		    	{
		    		current_sum+=arr[i];
		    		if(current_sum==s)
		    		{
		    			numbers.add(i+1);
		    			numbers.add(j+1);
		    			return numbers;
		    		}
		    	}
		    }

		}
		return numbers;
	}
}