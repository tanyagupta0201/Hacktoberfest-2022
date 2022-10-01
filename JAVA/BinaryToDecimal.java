/*
    Author name: Laasya Gupta
    Date Modified: 1 October, 2022
 */

import java.util.Scanner;

public class BinaryToDecimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String binary = sc.nextLine();

        int k = 0; // power of 2
        int num = 0; // decimal number

        // traverse string from right to left
        for (int i = binary.length() - 1; i >= 0; i--) {

            // add 2^k if 1 is encountered
            if (binary.charAt(i) == '1')
                num = num + (int) Math.pow(2, k);

            // keep increasing power of 2
            k++;
        }
        System.out.println(num);
    }
}
