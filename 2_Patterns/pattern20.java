import java.util.*;

public class pattern20 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        for(int i = 0 ; i < n ; i++) {
            for(int  j = 0; j < n; j++) {
                if(i == j || j + i == n - 1) {   // first print X pattern (same as j == n - 1 - i)
                    // System.out.print("*\t");
                    if (i > 0 && i < n/2 && j > 0 && j < n-1 ) { // then replace the upper mid star with stars 
                        System.out.print("\t");
                    }
                    else {
                        System.out.print("*\t");
                    }
                    
                }
                else if ( j == 0 || j == n - 1 ) { // print starts in first and last columns
                    System.out.print("*\t");
                }
                else {
                    System.out.print("\t");
                }
            }
            System.out.println(); //changing row
        }


    }
}