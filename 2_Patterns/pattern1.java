import java.util.*;

public class pattern1 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int row = n ;
        int col = n;        

        for(int i = 0 ; i < row ; i++) {
            for(int j = 0; j < col; j++) {
                
                if( j <= i ) System.out.print("* ");
                else System.out.print(" ");
            }
            System.out.println();
        }

    }
    
}
