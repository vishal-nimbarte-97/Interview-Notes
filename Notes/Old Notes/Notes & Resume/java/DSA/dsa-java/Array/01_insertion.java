//insertion
class Demo {
	public static void main(String[] args) {
		int arr[] = new int[] { 12, 23, 34, 45, 56 };
		int n = arr.length;
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println();
		// logic of insertion
		int index = 3;
		int element = 99;
		for (int i = n - 1; i > index; i--) {
			arr[i] = arr[i - 1];
		}
		arr[index] = element;
		n++;
		for (int i = 0; i <= n; i++) {
			System.out.print(arr[i] + " ");
		}
	}
}

// insert data in array
// class Demo
// {
// public static void main(String[] args)
// {
// int[] arr = new int[]{4,5,9,5,3};
// int insert_data = 99;
// int position = 3;

// }
// }