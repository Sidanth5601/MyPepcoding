import java.util.*;
  
  public class decimalToAny {
    
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int dn = decimalToAnyBase(n, b);
      System.out.println(dn);
   }
  
   public static int decimalToAnyBase(int n, int b){
       // write code here
       int pow = 0;
       int newBaseN = 0; // convert val

       while( n != 0) {
           int rem = n % b;
           newBaseN += ( rem  * (int)Math.pow(10, pow) ) ;
           n /= b; // update the n for next rem
           pow++; // increase the pow by 1
       }
       return newBaseN;
   }
  }