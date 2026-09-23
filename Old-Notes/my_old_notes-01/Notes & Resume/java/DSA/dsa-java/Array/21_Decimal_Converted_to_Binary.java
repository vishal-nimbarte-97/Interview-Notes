// //Java program to convert decimal number to binary number
// public class Main
// {
// 	public static void main(String args[])
// 	{   
// 		//Decimal Number
// 		int decimal = 12;
// 		//integer array for storing binary digits 
// 		int binary[] = new int[20];
// 		int i = 0; 
// 		//writing logic for the conversion 
// 		while(decimal > 0)//12>0//10>0//5>0//1>0
// 		{       
// 			int r = decimal % 2;//0//0//1//1
// 			binary[i++] = r;//0//0//1//1
// 			decimal = decimal/2;//10//5//1//0
// 		}
// 		//printing result
// 		System.out.print("Binary number : ");
// 		for(int j = i-1 ; j >= 0 ; j--)
// 		System.out.print(binary[j]+"");
// 	}
// }


class Demo
{
	public static void main(String[] string)
	{
		int a = 10;
		int[] binary = new int[100];
		int i = 0;
		while(a>0)
		{
			int r = a%2;
			binary[i] = r;
			i++;
			a/=2;
		}
		for(int j=i-1;j>=0;j--)
		{
			System.out.print(binary[j]);
		}
	}
}