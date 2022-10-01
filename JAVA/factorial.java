/*
    Authors Name : Ashan Tharaka
    Date Modified: 01 October, 2022
*/



import java.util.Scanner;

public class factorial {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter valid number:");
        int n=scanner.nextInt();
        factorial(n);


    }

    public static void factorial(int n){
        int mul=1;

        for (int i=1;i<=n;i++){
            mul*=i;


        }

        System.out.println("Factorial of "+n+" is "+mul);

    }
}
