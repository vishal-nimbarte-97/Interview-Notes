class Demo
{
	public static void main(String[] args)
	{
		String str = "vishal";
		System.out.println("Count : "+strCount(str));
	}
	public static int strCount(String str)
	{
		if(str.equals(""))
		{
			return 0;
		}
		else 
		{
			return strCount(str.substring(1))+1;
		}
	}
}

