import java.util.*;

public class pyramid {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int  n = scn.nextInt();

        int sp = n / 2;
        int st = 0;

        int sp2 = 0 ;
        
        
        for(int i = 0 ; i < n ; ++i) {

            for(int j = 0 ; j < sp; j++) System.out.print("   ");
            for(int j = 0 ; j < st; j++) System.out.print("*  ");

            for(int j = 0 ; j < sp; j++) { if(i != 0  && i != n) System.out.print("*  ");} 

            for(int j = 0 ; j < st; j++) { if(i == n/2) continue; System.out.print("*  ");} 
            for(int j = 0 ; j < sp; j++) System.out.print("   ");

            if(sp < n/2)
            {
               sp--;
            }
            else
            {
               sp++;
            }
            st = st - 1;
            System.out.println();
        }
      
    }
    
}
/*
for(int i = 0; i< n; i++) {
   System.out.print(sp1 +  "," + st1);
            System.out.print(sp2+  "," + st2);
            sp1++;
            sp2--; 
}

pattern 1 + pattern 2 with skipping middle star
sp st       sp st
0  1        4  1
1  1        3  1
2  1        2  0 // no star
3  1        1  1
4  1        0  1

pattern 1
*                  
   *  
      *  
         *  
            *     
------------------------------
pattern 2 with no mid star
            *  
         *  
        
   *  
*  

*/