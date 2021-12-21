import java.util.*;

public class pattern13 {
    public static void main(String[] args) {
        Scanner scn = new Scanner (System.in);

        int n = scn.nextInt();
        
        for(int i = 0; i < n; i++) {
            int icj =  1; // nCr for r = 0 always 1
            for(int j = 0; j <= i; j++){

                 System.out.print(icj + "\t");
                 int icj1 = icj * (i - j) / (j + 1) ;
                 icj  = icj1;
            
            }
            System.out.println();
        }
    }
}






































    /*
import java.util.*;

public class pattern13 {

    public static int logLine(int n) {

        System.out.print("1\t"); // print 1 at start

        int temp = n; // to store original n 
        int count = 0;
        while( n != 0 ) { n /= 10; count++ ;}
        
        n = temp; // reset to original after count
        
        
        int pow = (int)Math.pow(10 , count - 1);
        int pow2 = (int)Math.pow(10 , count);
        int firstDigit = n / pow2;
        int lineInt = 1 * pow; // return the whole number that will be printed in this line call 
        n %= pow; // update n for next Digit (2nd)
        pow /= 10; // update pow for next new n
        
        while( n != 0 ) {
            
            int secondDigit = n / pow;
            System.out.print( (firstDigit + secondDigit) + "\t");
            
            pow2 /= 10;
            lineInt += ( (firstDigit + secondDigit) * pow2);
            n %= pow; // update n for next Digit (2nd)
            pow /= 10; // update pow for next new n
            
            // int c = firstDigit + secondDigit ;
            firstDigit = secondDigit ;
            
            
        }
        System.out.print("1\t"); // print 1 at end
        System.out.println();
        System.out.println("lineint = " + lineInt); // print 1 at end
        return lineInt + 1; // return the whole number that will be printed in this line call  
    }
    
    
    
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in) ;
        int n = scn.nextInt();
       
        System.out.print("1\n");
        int n1 = 121;
        
        for(int i = 0 ; i < n - 2; i++) {
              int n2 = logLine(n1);
              n1 = n2;
        }
    }    
}

/* public static void LogElevenPow(int n) {
        int count = 0;
        int temp = n; // to store original n 
        while( n != 0 ) { n /= 10; count++ ;}
        n = temp; // reset to original after count

        int pow = (int)Math.pow(10 , count - 1);
        while( n != 0 ) {
            int firstDigit = n / pow;
            n %= pow; // update n for next firstDigit
            pow /= 10; // update pow for next new n
            int secondDigit = n /pow;
            System.out.print(firstDigit + "\t");
        }
    } */