import java.util.*;
    
    public class digitsOfNum{
        
    public static void main(String[] args) {
         Scanner scn = new Scanner(System.in);
      int num = scn.nextInt();
      int n = num; // temparary no
      int count  = 0;
      while(n != 0) {
          n /= 10;
          count++;
      }
      n = num; //again putting n = the original interger as it become zero
      int divisor = (int)Math.pow(10, count-1);
      while ( divisor != 0) { // n can be zero that y div != 0 used
          int firstDigit = n / divisor;  
          System.out.println(firstDigit);
          n = n % divisor; // update n for next firstDigit
          divisor /= 10;  // update div remove one zero 
      }
     }
    }