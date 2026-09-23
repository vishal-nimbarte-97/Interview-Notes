// Example 1:

// Input:
// N = 5, K = 3
// A[] = {0,0,2,1,1}
// Output: 0 0 1 2 
// Explanation: Sum of 0, 0, 1, 2 is equal
// to K.
// Example 2:

// Input:
// N = 7, K = 23
// A[] = {10,2,3,4,5,7,8}
// Output: 2 3 8 10 
//         2 4 7 10 
//         3 5 7 8 
// Explanation: Sum of 2, 3, 8, 10 = 23,
// sum of 2, 4, 7, 10 = 23 and sum of 3,
// 5, 7, 8 = 23.

// User function Template for Java

// arr[] : int input array of integers
// k : the quadruple sum required

class Solution 
{
    public ArrayList<ArrayList<Integer>> fourSum(int[] arr, int k)//0,0,2,1,1 //3
    {
        // code here
        int n = arr.length;//5
        ArrayList<ArrayList<Integer>> l = new ArrayList<>();
        
        if (arr == null || n < 4)//
        {
            return l;
        }
        
        Arrays.sort(arr); // Sort the array to simplify the process
        
        for (int i = 0; i < n - 3; i++) 
        {
            if (i > 0 && arr[i] == arr[i - 1])
            {
                continue; // Skip duplicates
            }
            
            for (int j = i + 1; j < n - 2; j++) 
            {
                if (j > i + 1 && arr[j] == arr[j - 1]) 
                {
                    continue; // Skip duplicates
                }
                
                int left = j + 1;
                int right = n - 1;
                
                while (left < right) 
                {
                    long sum = (long) arr[i] + arr[j] + arr[left] + arr[right];
                    
                    if (sum == k) 
                    {
                        ArrayList<Integer> quadruple = new ArrayList<>();
                        
                        quadruple.add(arr[i]);
                        quadruple.add(arr[j]);
                        quadruple.add(arr[left]);
                        quadruple.add(arr[right]);
                        l.add(quadruple);
                        
                        while (left < right && arr[left] == arr[left + 1]) 
                        {
                            left++;
                        }
                        
                        while (left < right && arr[right] == arr[right - 1]) 
                        {
                            right--;
                        }
                        
                        left++;
                        right--;
                    } 
                    else if (sum < k) 
                    {
                        left++;
                    } 
                    else 
                    {
                        right--;
                    }
                }
            }
        }
        
        return l;
    }
}