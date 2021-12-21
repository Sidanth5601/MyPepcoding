import java.util.*;

public class primeFactors{

public static void main(String[] args) {
  Scanner scn = new Scanner(System.in);
  int num = scn.nextInt();
  int n = num; // temp var.
  
  for(int div = 2 ; div * div <= n; div++) {// div <= n is not optimized for big prime nos eg "10^9 + 7"
      while(n % div == 0) {
          System.out.print(div + " ");
          n /= div;
      }
  }
  if(n != 1) { // this is a prime factor having value greater than root n
              // and there can be only one such factor
              
      System.out.print(n);
  }
    
 }
}