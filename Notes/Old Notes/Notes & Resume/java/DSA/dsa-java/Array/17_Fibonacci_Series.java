// import java.util.Scanner;
// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		int a = 0;
// 		int b = 1;
// 		int c = 0;

// 		Scanner sc = new Scanner(System.in);
// 		System.out.print("Enter the Range Of Number :- ");
// 		int num = sc.nextInt();

// 		System.out.print(a+" "+b);
// 		for(int i=0;i<num-2;i++)
// 		{
// 			c = a + b;
// 			a = b;
// 			b = c;
// 			System.out.print(" "+c);
// 		}
// 	}
// }

//===================================================================================

// 0 1 1 2 3 5 8 13 21 44
//Fibonacci Series
class Demo {
    public static void main(String[] args) {
        int a = 0;
        int b = 1;
        System.out.print(a + " " + b + " ");
        int c = 0;
        for (int i = 0; i < 10; i++) {
            c = a + b;
            a = b;
            b = c;
            System.out.print(c + " ");
        }
    }
}
