import java.util.*;
    
    public class gcdAndLcm{
        static int gcd(int a, int b) {
            if(a == 0) return b;
            if(b == 0) return a;
            return gcd(b ,a % b);
        }
    
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n1 = scn.nextInt();
        int n2 = scn.nextInt();
        int temp1 = n1;
        int temp2 = n2;
        
      /*  while(n1 % n2 != 0) {
            int remainder = n1 % n2;
            n1 = n2;     // previous divisor becomes new dividend
            n2 = remainder; // remainder of n1 % n2 becomes new divisor
        } 
         int gcd = n2;
         int lcm = temp1 * temp2 / gcd; { since lcm * Hcf = product of a and b }
       */
        int gcd = gcd(n1, n2);
        int lcm = (temp1 * temp2) / gcd;
        System.out.println(gcd);
        System.out.println(lcm);
            
     }
    }