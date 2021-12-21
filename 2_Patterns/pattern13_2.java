import java.util.*;

public class pattern13_2 {
    public static int fac(int n) {
        if(n == 0)  return 1;        // base case solves the problem
        else return ( n * fac(n-1) ); // general case reduce the size of the problem
    }
    public static void main(String[] args)  {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        // basically nCr == iCr == n!/ ( (n-1)! * r! ) == i!/ ( (i-j)! * j! ) 
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j <= i; j++) {
                int comb = fac(i) / ( fac( i - j) * fac (j) );
                if(comb != 0)
                System.out.print( comb + "\t" );
            }
            System.out.println();
        }
    
    
    
    
    
    }
    
}
