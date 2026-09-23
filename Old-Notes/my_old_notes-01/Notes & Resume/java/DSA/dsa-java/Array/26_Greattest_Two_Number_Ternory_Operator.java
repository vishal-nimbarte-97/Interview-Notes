class Demo
{
	public static void main(String[] args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		int x = sc.nextInt();

		int y = sc.nextInt();

		int z = sc.nextInt();

		String res = (x>y && x>z)?(x+ " is Greatter Than "+y+" and "+z):
					 (y>z)?(y+ " is Greatter Than "+x+" and "+z):
					 (z+ " is Greatter Than "+x+" and "+y);

		System.out.println(res);		
	}
}