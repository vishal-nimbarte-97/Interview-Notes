
class Demo
{
    public static void main(String[] args)
    {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Decimal     Number :- ");
        int num = sc.nextInt();
        System.out.print("HexaDecimal Number :- ");convertHexa(num);
    }
    public static void convertHexa(int decimal)
    {
        int i = 0;
        int rem = 0;
        char[] arr = new char[100];
        while(decimal!=0)//2545
        {
            rem = decimal % 16;//1
            if(rem<10)
            {
                arr[i] = (char)(rem+48);
                // System.out.println(arr[i]);
                i++;
            }
            else 
            {
                arr[i] = (char)(rem+55);
                i++;
            }
            decimal = decimal / 16;
        }

        for(int j=i-1;j>=0;j--)
        {
            System.out.print(arr[j]);
        }
    }
}

// class Demo
// {
//     public static void main(String[] args)
//     {
//         java.util.Scanner sc = new java.util.Scanner(System.in);

//         int num = sc.nextInt();

//         convertDecimalToHexa(num);
        
//     }
//     public static void convertDecimalToHexa(int num)
//     {
//         int rem = 0;
//         int i = 0;
//         char[] hexa = new char[100];
//         while(num!=0)//2545
//         {
//             rem = num % 16;//1
//             if(rem<10)
//             {
//                 hexa[i] = (char)(rem + 48);
//                 // System.out.println(hexa[i]);
//                 i++;
//             }
//             else 
//             {
//                 hexa[i] = (char)(rem + 55);
//                 // System.out.println(hexa[i]);
//                 i++;
//             }
//             num = num / 16;
//         }
//         for(int j=i-1;j>=0;j--)
//         {
//             System.out.print(hexa[j]);
//         }
//     }

// }