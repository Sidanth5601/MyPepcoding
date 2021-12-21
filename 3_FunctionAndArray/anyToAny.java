import java.util.*;
  
  public class anyToAny {
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int sourceBase = scn.nextInt();
     int  destBase= scn.nextInt();
     int res = anyBaseToAny(n, sourceBase, destBase);
     System.out.println(res);
   }   
   
   public static int anyBaseToAny(int n , int sourceBase, int destBase) {
       int newn = anyBaseToDecimal(n , sourceBase) ;
       return ( decimalToAnyBase(  newn , destBase) ); 
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
       return newBaseN ;
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
   