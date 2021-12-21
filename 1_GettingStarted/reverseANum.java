import java.util.*;
   
public class reverseANum{

public static void main(String[] args) {
  Scanner scn = new Scanner(System.in);
  int num = scn.nextInt();
  while(num != 0) {
     int lastDigit = num % 10;
     System.out.println(lastDigit);
     num /= 10 ;
  }
 }
}