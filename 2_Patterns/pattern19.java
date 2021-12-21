import java.util.*;

public class pattern19{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

    int n = scn.nextInt();
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n ; j++) {
            if(i == 0){     // first component
                if( j <= n/2 || j == n - 1) {
                    System.out.print("*\t");
                }
                else {
                    System.out.print("\t");
                }

            }
            else if ( i < n/2 ) {   // second component 
                if( j == n/2 || j == n - 1) 
                    System.out.print("*\t");
                else {
                    System.out.print("\t");
                }
            }
            else if (i == n/2) // third component
            {
                    System.out.print("*\t"); // all stars
            }
            else if ( i < n && i > n/2){   // fourth component
                   if( j == 0  || j == n/2 )  {
                       System.out.print("*\t");
                   }
                else {
                    System.out.print("\t");
                }
            }

            else    //fifth component
            {
                if(j == 0  || j >= n/2)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("\t");
                }
            }
        }
        System.out.println(); // changing row
    }

 }
}