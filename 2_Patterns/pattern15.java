import java.util.*;

public class pattern15 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n  =  scn.nextInt();
        int sp = n / 2; // sp = space
        int st = 1; // st = star 
 
        int val = 1;
        for(int i = 0 ; i < n ; i++) {
            // System.out.print(sp + "," + st);
            
            int cval = val;
            for(int j = 0; j < sp; j++) System.out.print("\t");
            for(int j = 0; j < st; j++) {
                System.out.print( cval + "\t");

                if( j < st / 2)
                     cval++;
                else 
                     cval--;
            }

            if( i < n / 2) {
                sp--;
                st += 2;
                val++;
            }
            else {
                sp++;
                st -= 2;
                val--;
            }
            
            System.out.println();
        }

    }
}