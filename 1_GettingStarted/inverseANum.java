
import java.util.*;

public class inverseANum{

public static void main(String[] args) {
   Scanner scn = new Scanner(System.in);
   int num = scn.nextInt();
   int n = num;
   
   int invsNo = 0;
   for(int i = 1 ; n != 0 ; i++) {
       int lastDigit = n % 10;
       int divisor = (int)Math.pow(10, lastDigit-1);  // inversePlace =  lastDigit - 1
       invsNo += (i * divisor);
       n /= 10; // update for next lastDigit
   } 
   System.out.println(invsNo);
 }
  
   
}
/*
pos 4321  
num 4312
 1 * 10   // no of zeros =  lastdigit - 1
 2 * 1
 3 * 100
 4 * 1000
*/