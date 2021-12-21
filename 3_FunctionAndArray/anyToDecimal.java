
import java.util.*;
  
  public class anyToDecimal {
    
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int dn = anyBaseToDecimal(n, b);
      System.out.println(dn);
   }
  
   public static int anyBaseToDecimal(int n, int b){
       // write code here
       int pow = 0;
       int newBaseN = 0; // convert val

       while( n != 0) {
           int rem = n % 10;
           newBaseN += ( rem  * (int)Math.pow(b, pow) ) ;
           n /= 10; // update the n for next rem
           pow++; // increase the pow by 1
       }
       return newBaseN;
   }
  }