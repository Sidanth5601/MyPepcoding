import java.util.*;
   
   public class rotated{
   
   public static void main(String[] args) {
     
    Scanner scn = new Scanner(System.in);
    int num = scn.nextInt();
    int k = scn.nextInt();
    
    //counting the no of digits
    int n = num ; //temp var.
    int count = 0;
    while( n != 0) { n /= 10; count++; } 
    
    n = num;
    
    k = k % count ; // becoz no change in rotatedNo when k is count 
    if(k < 0) k = k + count ; // if k is negative 
    
    int rotated = 0 ;

    int divisor = (int)Math.pow(10, k);
    int firstDigits = n % divisor; // actually getting the last kth elements which become starting digit for rotated
    rotated += firstDigits * (int)Math.pow(10, count - k) ;
    int lastDigits = n  / divisor ; // getting remaining front element that become last digits for rotated

    rotated += lastDigits;
    

    System.out.println(rotated);
     
    }

 }