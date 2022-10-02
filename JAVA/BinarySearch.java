/*
    Code: Binary Search Using Java(Iterative Approach)
    Name: Gaurav Agarwal
    Date of Modification: 2 oct 2022
*/
import java.util.Scanner;
public class BinarySearch{
/*
    Binary search is used to search a key element from multiple elements. Binary search is faster than linear search.

    In case of binary search, array elements must be in ascending order. If you have unsorted array, you can sort the array using Arrays.sort(arr) method.

*/
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n = sc.nextInt();

        // declaring array
        int arr[] = new int[n];
        System.out.println("Enter the elements:");

        // taking input array elements from user
        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();
        System.out.println("Enter the element to be searched:");

        // element to be searched
        int search = sc.nextInt();
        int low = 0;
        int high = n-1;
        int mid;
        while(low<=high)
        {
            mid = (high+low)/2;
            if(arr[mid]==search)
            {
                System.out.println(search+" found at "+mid+" index");
                break;
            }
            else if(arr[mid]<search)
                low = mid+1;
            else
                high = mid-1;
        }
        if(low>high)
            System.out.println("element not found in array.");

        /*
            Time complexity: O(logn)
            because if we do not find in middle then we will compare with the half of the remaining list.

            Space complexity: O(1)
            we are not using any extra array 
        */
	}

}
