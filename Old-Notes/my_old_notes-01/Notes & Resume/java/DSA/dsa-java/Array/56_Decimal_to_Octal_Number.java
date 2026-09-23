//Decimal Number Converted to the Octal Number
class Demo
{
    public static void main(String[] args)
    {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Decimal Number : ");
        int num = sc.nextInt();
        System.out.println("Octal Number  : "+octalConvertor(num));
    }
    public static int octalConvertor(int num)
    {
        int octalNum = 0;
        int countVal = 1;
        while(num!=0)//33!=0 //4!=0 //0!=0
        {
            int rem = num%8;//1//4
            octalNum = octalNum + rem*countVal;//1+4*10=>41
            countVal = countVal*10;//10//100
            num = num / 8;//0
        }
        return octalNum;
    }
}


// // JAVA program to convert decimal
// import java.io.*;
// class Main {

//     // function to calculate the octal value of the given
//     // decimal number
//     static void octaltodecimal(int deciNum)//33
//     {

//         int octalNum = 0, countval = 1;
//         int dNo = deciNum;

//         while (deciNum != 0)//33!=0//4!=0
// 		{

//             // decimals remainder is calculated
//             int remainder = deciNum % 8;//1//4

//             // storing the octalvalue
//             octalNum = octalNum + remainder * countval;//1//1+4*10=>41

//             // storing exponential value
//             countval = countval * 10;//10
//             deciNum = deciNum / 8;//4
//         }
//         System.out.println(octalNum);
//     }

//     // Driver Code
//     public static void main(String[] args)
//     {

//         int n = 33;
//         // Function Call
//         octaltodecimal(n);
//     }
// }