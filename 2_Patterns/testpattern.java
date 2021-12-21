
import java.util.*;

public class pattern18 {

    public static void main(String[] args) {
         Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int sp = 0;
        int st = n;

        for(int i = 0 ; i < n ; i++) {
            // System.out.print(sp + "," + st + "," + sp);
            for(int j = 0 ; j < sp ; j++) System.out.print("\t");
            for(int j = 0 ; j < st ; j++) System.out.print("*\t");
            for(int j = 0 ; j < sp ; j++) System.out.print("\t");

            for(int j = 0 ; j < st ; j++) 
            if( j!= 0 || kj!= st ) {
                System.out.print("\t");
            }
            else {
                System.out.print("*\t");
            } 

            

            if(i < n/2) {
                sp++;
                st -= 2;
            }
            else 
            {
                sp--;
                st += 2;
            }

            System.out.println();
        }

 }
}


            // for(int j = 0 ; j < st ; j++) 
            // if( j != 0 || j != st ) {
                // System.out.print("\t");
            // }
            // else {
                // System.out.print("*\t");
            // } 

            // for(int j = 0 ; j < sp ; j++) System.out.print("\t");
            // for(int j = 0 ; j < st ; j++) System.out.print("*\t");
            // for(int j = 0 ; j < sp ; j++) System.out.print("\t");












            

// import java.util.*;
                            // public class testpattern{
                                // public static void main(String[] args)
                                // {
                                    // Scanner scn = new Scanner(System.in);
                                    // int n  = scn.nextInt();
                                    // int sp = n-1,st = 1; // sp = spaces ; st = stars
                                    // for(int i =1; i<=n;i++)
                                    // {
                                       // for(int j = 1;j<=sp;j++)     // runs till the number of spaces on particular line
                                       // {                            
                                           // System.out.print("	");  //prints the number of spaces required on the line
                                       // }
                                       // for(int j = 1;j<=st;j++)    // runs till the number of stars on particular line
                                       // {
                                           // System.out.print("*	"); //prints the number of stars required on the line
                                       // }
                                        // sp--;                      //decrementing the spaces by 1 for next line     
                                        // st++;                      //incrementing the stars by 1 for next line
                                        // System.out.println();      //Adding new line for output on console
                                    // }
                                // }
                            // }