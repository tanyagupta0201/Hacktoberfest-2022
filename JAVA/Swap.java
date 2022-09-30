public class Swap{
	public static void main(String args[]){
		int a =10,b =20;
		System.out.println("Before swapping : a="+a+" b="+b);
		a=a+b;
		b=a-b;
		a=a-b;
		System.out.println("After swapping : a="+a+" b="+b);
	}	
}