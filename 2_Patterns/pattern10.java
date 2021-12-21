import java.util.*;

public class pattern10 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int  n = scn.nextInt();

        int os = n / 2; //outer spacing = half of n
        int is = -1; //same as 0; not to print anything

        for(int i = 0; i < n ; i++) {
           // System.out.print(os + "," + is);

          for(int j = 0 ; j < os; j++) System.out.print("	");// print outer space 
          System.out.print("*	");                           // print a star
         
          for(int j = 0; j < is ; j++) System.out.print("	"); // print inner space
          if( i > 1 && i < n) {                                // spl case whether star is printed or not
            System.out.print("*");
          }
           

           if( i < n / 2 ) {
              os--;
              is += 2;
           } 
           else {
              os++;
              is -= 2 ;
           }

           System.out.println();
        }
        
    }
    
}
/*
for this problem we there are 2 space patterns 
one is outer space = os
second is inner space = is

5
os is
2,-1
1,1
0,3
1,1
2,-1

now we have one star after os,
the we have one star after is ( with a spl case , not having star in 1st and last row)
*/