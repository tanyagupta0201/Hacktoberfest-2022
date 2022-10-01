/*
    Code: Tower Of Hanoi (JAVA)
    Name: d-coder111
    Date of Modification: 1 October, 2022
 */

public class TOH {
	
	public static void towerHanoi(int n,char s,char h,char d) {
		if(n==1) {
			System.out.println("Move 1st disk from "+s+" to "+d);
			return;
		}
		
		towerHanoi(n-1, s, d, h);
		System.out.println("Move "+n+"th disk from "+s+" to "+d);
		towerHanoi(n-1, h, s, d);
	}

	public static void main(String[] args) {
     //s-start tower
    //h-helper tower
    //d-destination tower
		towerHanoi(4, 's','h','d');

	}

}
