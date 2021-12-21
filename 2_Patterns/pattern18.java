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
            for(int j = 0 ; j < st ; j++) {
            
                if( i > 0 && i < n/2 && j > 0 && j < st - 1) {
                    System.out.print("\t");
                }
                else
                System.out.print("*\t");

              /*
              // this logic is also correct
              if( i  > 0 && i < n/2) {

                    System.out.print("*\t"); //start with * 
                    for(int k = 0; k < st -2 ; k++)
                    System.out.print("\t"); // in - b/w all spaces
                    System.out.print("*\t"); // end with *
                    break;
                }
                  else
                  System.out.print("*\t");
                  */
            }

            // for(int j = 0 ; j < sp ; j++) System.out.print("\t");

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
// n = 
// No need for 3rd space
// sp st sp 
// 0  7  0
// 1  5  1
// 2  3  2
// 3  1  3
// 2  3  2
// 1  5  1
// 0  7  0
            // for(int j = 0 ; j < sp ; j++) System.out.print("\t");
            // for(int j = 0 ; j < st ; j++) System.out.print("*\t");
            // for(int j = 0 ; j < sp ; j++) System.out.print("\t");
