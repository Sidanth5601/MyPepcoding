import java.util.*;

public class printAll_PrimeTill_N{
    static boolean  isPrime(int num) {
        // corner cases
        if(num <= 1) return false;
        if(num <= 3) return true;

        // remain cases
        if(num % 2 == 0 || num % 3 == 0) return false;

        for(int i = 5; i * i <= num; i += 6) {
            if(num % i == 0 || num % (i+2) == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        
         Scanner scn = new Scanner(System.in);
        int l = scn.nextInt();
        int h = scn.nextInt();
        for(int i = l; i <= h; i++) {
            if( isPrime(i) ) System.out.println(i);
        }
    }
}    