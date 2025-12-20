// import java.util.Scanner;
// //prime number logic
// class Demo {
// 	public static void main(String[] args) {
// 		Scanner sc = new Scanner(System.in);
// 		int num = sc.nextInt();
// 		boolean flag = false;
// 		for (int i = 2; i < num; i++) {
// 			if (num % i == 0) {
// 				flag = true;
// 			}
// 		}
// 		if (flag) {
// 			System.out.println("Not a Prime Number..!");
// 		} else {
// 			System.out.println("Prime Number...!");
// 		}
// 	}
// }

//write a program to find factorial of a number(user input);

// import java.util.Scanner;

// class Demo {
// 	public static void main(String[] args) {
// 		Scanner sc = new Scanner(System.in);
// 		int user_input = sc.nextInt();
// 		int fact = 1;
// 		for (int i = 1; i <= user_input; i++) {
// 			fact = fact * i;
// 		}
// 		System.out.println("Factorial : " + fact);
// 	}
// }

//write a java program to print above pyramid pattern?
// class Demo {
// 	public static void main(String[] args) {
// 		for (int i = 0; i < 5; i++) {
// 			for (int j = 0; j <= i; j++) {
// 				System.out.print("* ");
// 			}
// 			System.out.println();
// 		}
// 	}
// }

//write a program to print the element of an array present on even position?
// class Demo {
// 	public static void main(String[] args) {
// 		int[] arr = new int[] { 12, 23, 33, 45, 67, 56, 34 };
// 		for (int i = 1; i < arr.length; i += 2) {
// 			System.out.print(arr[i] + " ");
// 		}
// 	}
// }

// import java.util.Scanner;
// class Demo
// {
// public static void main(String[] args)
// {
// //prime number
// //2,3,5,7,11,13,17,19,23....97
// // int num = 73;
// Scanner sc = new Scanner(System.in);
// int num = sc.nextInt();

// boolean flag = false;
// for(int i=2;i<num;i++)//23
// {
// if(num%i==0)
// {
// flag = true;
// }
// }
// if(flag)
// {
// System.out.println("Not-Prime Number..!");
// }
// else
// {
// System.out.println("Prime Number..!");
// }
// }
// }

// import java.util.Scanner;
// class Demo
// {
// public static void main(String[] args)
// {
// Scanner sc = new Scanner(System.in);
// for(int i=1;i<=100;i++)
// {
// if(primeOrNot(i))//false->1//true->2//true->3//true->4
// {
// System.out.print(i+" ");//2
// }
// }
// }
// public static boolean primeOrNot(int num)//3
// {
// if(num<2)//
// {
// return false;//
// }
// else
// {
// if(num==4){
// return false;
// }
// for(int i=2;i<Math.sqrt(num);i++)//
// {
// if(num%i==0)
// {
// return false;
// }
// }
// }
// //-------------part-one-----------
// // else
// // {
// // if(num==4)
// // {
// // return false;
// // }
// // int x= num/2;//1//1//2//3
// // for(int i=2;i<x;i++)//2<3
// // {
// // if(num%i==0)//6%
// // {
// // return false;
// // }
// // }
// // }
// return true;//2//3//4
// }
// }
