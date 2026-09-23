
class Main 
{
    public static void main(String[] args) 
    {
        int num1 = 2, num2 = 8;
        int hcf = getHCF(num1, num2);
        System.out.println("The HCF: " + hcf);
        // LCM formula
        int lcm = (num1 * num2) / hcf;
        System.out.println("The LCM: " + lcm);
    }
    // This method improves complexity of repeated substraction
    // By efficient use of modulo operator in euclidean algorithm
    static int getHCF(int a, int b) 
    {
        return b == 0 ? a : getHCF(b, a % b);
    }
}