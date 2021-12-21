// Logic used : lets solve the first half with Analysis of line-line
// and then solve the second half with Analysis of line-line second half pattern

// sp st 
// 2  1
// 2  2
// 0  3-----------------> spl case in Mid just instead of space print star in space Loop
// 2  2
// 2  1
import java.util.*;

public class pattern17 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int sp =  n / 2;
        int st = 1;
        
        for(int i = 0 ; i < n  ; i++) {
            if( i != n/2) {

                // System.out.print(sp);
                for (int j = 0 ; j < sp; j++) System.out.print("\t");   // firstHalf_pattern
                for (int j = 0 ; j < st; j++) System.out.print("*\t");  // secondHalf_pattern
            }
            else {
                // spl case mid instead of space in mid line just print star
                for (int j = 0 ; j < sp; j++) System.out.print("*\t");  // firstHalf_pattern
                for (int j = 0 ; j < st; j++) System.out.print("*\t");  // SecondHalf_pattern
            }

            if(i < n/2) {
                st++;
            }
            else {
                st--;
            }
            
            System.out.println();
        }

    }
    
}

        // for(int i = 0; i < n; i++) {
            // for(int j = 0; j < n; j++) {
                // if(i == n/2 || j == n/2) System.out.print("*\t");
                // else System.out.print("\t");
            // } 
            // System.out.println();
        // }