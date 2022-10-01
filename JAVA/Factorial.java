import java.util.Scanner;

class Abc
{
	public int f=1,i=0;

	public void fact(int n)
	{
		for(i=1; i<=n; i++)
		{
			f = f*i;
		}
		
		System.out.println(n + " Factorial is : " + f);
	}
}

class factorial
{
	public static void main(String arr[])
	{
		Scanner m = new Scanner(System.in);
		
		System.out.print("Enter Elemnt TO find Factorial : ");
		int n = m.nextInt();
		
		Abc a1 = new Abc();
		a1.fact(n);
		
	}
}
