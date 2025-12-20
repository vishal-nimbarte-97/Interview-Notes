// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);
		
// 		int num = sc.nextInt();


// 	}
// }

// class Demo
// {
//   public static void main (String[]args)
//   {

//     String hex = "C9";
//     System.out.println (convert (hex));
//   }
  
//   static int convert(String hex)//C9
//   {  			   // 01234 5678910112
//     String digits = "0123456789ABCDEF";  
//              hex = hex.toUpperCase();  
//              int val = 0;  
//              for (int i = 0; i < hex.length(); i++) //3<16
//              {  
//                  char c = hex.charAt(i);//C
//                  int d = digits.indexOf(c);//12 //9
//                  System.out.println(d);
//                  val = 16*val + d;//192+9
//                  System.out.println(val);
//              }  
//              return val;  
//   }  

// }


// import java.util.*;
// class Hexa_decimal
// {
// public static void main(String args[])
// {
// Scanner sc=new Scanner(System.in);
// System.out.println("Enter a hexadecimal number : ");
// String hex=sc.nextLine();//C
// int decimal=Integer.parseInt(hex,16);
// System.out.println("Decimal version is : "+decimal);
// }
// }

// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);

// 		String hex_num = sc.next();

// 		int decimal_num = Integer.parseInt(hex_num,16);//working by default

// 		System.out.println(decimal_num);
// 	}
// }

// class Demo
// {
// 	public static void main(String[] args)
// 	{
// 		java.util.Scanner sc = new java.util.Scanner(System.in);

// 		String hex_num = sc.next();

// 		System.out.println(decimalConvertor(hex_num));
// 	}

// 	public static int decimalConvertor(String hex_num)
// 	{
// 		String digit = "0123456789ABCDEF";

// 		hex_num = hex_num.toUpperCase();

// 		int val = 0;

// 		for(int i=0;i<hex_num.length();i++)
// 		{
// 			char c = hex_num.charAt(i);
// 			int d = digit.indexOf(c);
// 			val = 16*val + d;
// 		}
// 		return val;
// 	}
// }

class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);
		System.out.print("Enter hexadecimal number :- ");
		String hex = sc.next();
		int decimal = Integer.parseInt(hex,16);
		System.out.println("Deciaml Numer :- "+decimal);
	}
}














