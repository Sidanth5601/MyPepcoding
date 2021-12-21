/* n = 5
                *
        *               *
*                               *
        *               *
                *

st1 st2 
2   2
1   3
0   4
1   3
2   2  
 combining these two st1 and st2 we use OR operator
*/
import java.util.*;

public class pattern10_2 {
  public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
    int n  = scn.nextInt();
    int st1 = n / 2;  // st1 = stars with some pattern
    int st2= n / 2;   // st2 = remaining stars

    for(int i = 0 ; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(st1 == j || st2 == j)
           System.out.print("*" + "\t");
            else
           System.out.print("\t");

        }
        if(i < n/2){
            st1--;
            st2++;
        }
        else {
            st1++;
            st2--;
        }
        System.out.println();
    }
  }
}