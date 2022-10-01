/*
    Code: Transpose of a square matrix
    Author Name: Laasya Gupta
    Date Modified: 1 October 2022
*/

import java.util.Arrays;
import java.util.Scanner;

public class TransposeOfMatrix {
    public static void main(String[] args) {

        // input matrix using scanner
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter No. of rows");
        int rows = sc.nextInt();

        System.out.printf("Enter %d X %d matrix\n", rows, rows);
        sc.nextLine();

        int[][] mat = new int[rows][];

        for (int i = 0; i < rows; i++) {
            String[] input = sc.nextLine().split(" ");

            int[] temp = new int[input.length];

            for (int j = 0; j < input.length; j++) {
                temp[j] = Integer.parseInt(input[j]);
            }
            mat[i] = temp;
        }

        // function call to do transpose
        transposeMatrix(mat);
        for (int[] row : mat) {
            System.out.println(Arrays.toString(row));
        }
    }

    private static void transposeMatrix(int[][] mat) {
        for (int i = 0; i < mat.length; i++)
            for (int j = 0; j < mat[i].length; j++) {

                // swap upper triangle elements with lower triangle
                if (j > i) {
                    int temp = mat[i][j];
                    mat[i][j] = mat[j][i];
                    mat[j][i] = temp;
                }
            }
    }

}
