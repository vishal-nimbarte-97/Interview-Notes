// Bubble sort algorithm

class Demo {
	public static void main(String[] args) {
		int[] arr = new int[] { 12, 4, 45, 87, 32, 9, 43, 90, 5, 56 };
		int temp = 0;
		// System.out.println(1);
		for (int i = 0; i < arr.length; i++) {

			for (int j = 0; j < arr.length - 1; j++) {

				if (arr[j] > arr[j++]) {
					System.out.println(1);
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
	}
}

// case - 1 that time more time complexity
// class Demo {
// public static void main(String[] args) {
// int[] arr = new int[] { 12, 4, 45, 87, 32, 9, 43, 90, 5, 56 };
// int n = arr.length - 1;
// System.out.println("Before Sorted Element...");
// for (int i = 0; i < arr.length; i++) {
// System.out.print(arr[i] + " ");
// }
// System.out.println("\nAfter Sorted Element...");
// // logic of bubble sort algorithm
// int temp = 0;
// for (int i = 0; i < n; i++) {
// for (int j = 0; j < n - 1; j++) {
// if (arr[j] > arr[j + 1]) {
// temp = arr[j];
// arr[j] = arr[j + 1];
// arr[j + 1] = temp;
// }
// }
// }
// for (int i = 0; i < n; i++) {
// System.out.print(arr[i] + " ");
// }
// }
// }

// case - 2 => less time complexity as compare to the case -1

// class Demo {
// public static void main(String[] args) {
// int[] arr = new int[] { 12, 4, 45, 87, 32, 9, 43, 90, 5, 56 };
// int n = arr.length - 1;
// System.out.println("Before Sorted Element...");
// for (int i = 0; i < arr.length; i++) {
// System.out.print(arr[i] + " ");
// }
// System.out.println("\nAfter Sorted Element...");
// // logic of bubble sort algorithm
// int temp = 0;

// for (int i = 0; i < n; i++) {
// for (int j = 0; j < n - 1 - i; j++) {
// if (arr[j] > arr[j + 1]) {
// temp = arr[j];
// arr[j] = arr[j + 1];
// arr[j + 1] = temp;
// }
// }
// }

// for (int i : arr) {
// System.out.print(i + " ");
// }
// }
// }

// case - 3
// class Demo
// {
// public static void main(String[] args)
// {
// int[] arr = new int[]{12,4,45,87,32,9,43,90,5,56};
// int n = arr.length;
// System.out.println("Before Sorted Element...");
// for(int i=0;i<arr.length;i++)
// {
// System.out.print(arr[i]+" ");
// }
// System.out.println("\nAfter Sorted Element...");
// //logic of bubble sort algorithm
// int temp = 0;
// int flag = 0;
// for(int i=0;i<n;i++)
// {
// flag = 0;
// for(int j=0;j<n-i-1;j++)
// {
// if(arr[j]>arr[j+1])
// {
// temp = arr[j];
// arr[j] = arr[j+1];
// arr[j+1] = temp;
// flag = 1;
// }
// }
// if(flag==0)
// {
// break;
// }
// }
// for(int i:arr)
// {
// System.out.print(i+" ");
// }
// }
// }
