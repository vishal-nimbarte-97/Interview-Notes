//Binary to Octal convertion two type
//1.binary converted to decimal
//2.decimal converted to octal

class Demo
{
	public static void main(String[] args)
	{
		//user input binary formate
		java.util.Scanner sc = new java.util.Scanner(System.in);
		System.out.print("Enter Binary Number :- ");
		int binary_number = sc.nextInt();//1010
		int decimal_number = decimalConverter(binary_number);//1010
		int octal_number = octalConverter(decimal_number);//10
		System.out.println("Octal Number :- "+octal_number);
	}
	public static int decimalConverter(int binary_number)//1010
	{
		int rem = 0;
		int count = 0;
		int decimal_number = 0;
		while(binary_number!=0)//1010!=0
		{
			rem = binary_number % 10;//0//	
			decimal_number = decimal_number + rem*(int)Math.pow(2,count);//0+0*1=>0
			binary_number/=10;//101
			count++;//1
		}
		return decimal_number;
	}
	public static int octalConverter(int decimal_number)//10
	{
		int rem = 0;
		int countVal = 1;
		int octal_number = 0;
		while(decimal_number!=0)//10!=0//1!=0
		{
			rem = decimal_number % 8;//10%8=>2//1%8=>1
			octal_number = octal_number + rem*countVal;//0+2*1=>2//2+1*10=>12
			countVal = countVal*10;//10//100
			decimal_number/=8;//1//0
		}
		return octal_number;//12
	}
}