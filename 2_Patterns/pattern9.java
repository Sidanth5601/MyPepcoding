// This problem is a combination of the two problems we have already faced, 
// a diagonal of stars that leans down from left to right (Pattern 7) and
// a diagonal of stars that rise up from left to right (Pattern 8).

// So we combine the printing conditions of both the loops by an "or" operator 
// to create the required program to print the "Cross of stars".
// We use the "or" operator so that the star is printed if either of the conditions is true.

import java.util.*;

public class pattern9 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        
        for(int  i = 0; i < n ; i++) {
            for(int j = 0; j< n; j++) {
                if( i == j || j + i == n - 1) System.out.print("*	");
                else  System.out.print("	");
            }
            System.out.println();
        }


    }
}
