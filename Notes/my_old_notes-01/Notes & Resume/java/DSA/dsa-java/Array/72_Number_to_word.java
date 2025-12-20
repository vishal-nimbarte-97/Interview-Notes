import java.util.Scanner;
class Main {
  
    static void convert_to_words(char[] num)//8888
    {
    
        int len = num.length;//4
 
        // Base cases
        if (len == 0)
        {
            System.out.println("empty string");
            return;
        }
        if (len > 4) 
        {
            System.out.println("Length more than 4 is not supported");
            return;
        }
    
        //single digit

        String[] single_digits = new String[] {
            "zero", "one", "two",   "three", "four",
            "five", "six", "seven", "eight", "nine"
        };
 
        String[] two_digits = new String[] {
            "",          "ten",      "eleven",  "twelve",
            "thirteen",  "fourteen", "fifteen", "sixteen",
            "seventeen", "eighteen", "nineteen"
        };
 
        String[] tens_multiple = new String[] {
            "",      "",      "twenty",  "thirty", "forty",
            "fifty", "sixty", "seventy", "eighty", "ninety"
        };
 
        String[] tens_power = new String[] { "hundred", "thousand" };
 
        System.out.print(String.valueOf(num) + ": ");////8888

        if (len == 1)
        {
            System.out.println(single_digits[num[0] - '0']);//
            return;
        }
 
        int x = 0;

        while (x < num.length)//0<4//1<4//2<4
        { 
            if (len >= 3)//4>=3//3>=3//2>=3
            {
                if ((num[x] - '0') != 0)//(num[0]-'0') !=0 //8!=0//num[1]-'0'//8-0!=0
                {
                    System.out.print(single_digits[num[x] - '0'] + " ");//8->eight//8->eight
                    System.out.print(tens_power[len - 3] + " ");//1->thousand//0->hundread
                    
                }
                --len;//3//2
            }
            else
            {
                //x=2 and len=2
                if (num[x] - '0' == 1)//8==1
                {
                    int sum = num[x] - '0' + num[x + 1] - '0';
                    System.out.println(two_digits[sum]);
                    return;
                }
                else if (num[x] - '0' == 2 && num[x + 1] - '0' == 0)//8==2 && 9==0
                {
                    System.out.println("twenty");
                    return;
                }
                else 
                {
                    int i = (num[x] - '0');//8
                    if (i > 0)//8>0
                        System.out.print(tens_multiple[i] + " ");//eighty
                    else
                        System.out.print("");
                    ++x;//3
                    if (num[x] - '0' != 0)//8!=0
                        System.out.println(single_digits[num[x] - '0']);//8->eight
                }
            }
            ++x;//1//2
        }
    }
 
    // Driver Code
    public static void main(String[] args)
    {
        System.out.print("Enter Four Digit Number :- ");
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        convert_to_words(str.toCharArray());
    }
}
