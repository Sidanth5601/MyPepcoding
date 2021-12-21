import java.util.*;

public class pattern8 {
    public static void main( String[] args ) {
        Scanner scn = new Scanner(System.in) ;
        int n = scn.nextInt();

        int sp = n - 1; // sp = space 
        int st = 1; // st = stars

        for(int i = 0 ; i < n ; i++) {

            for(int j = 0 ;  j < sp ; j++)  System.out.print("*\t");;
            for(int j = 0 ;  j < st ; j++)   
            sp--;

            System.out.println();
        }

    }
    
}
/*
Method 1: Grid
i j
0 4
1 3
2 2
3 1
4 0
condition comes as j = n - 1 - i  or j + i = n - 1 also same
if(j = n - 1 - i) cout<<"* ";
else  cout << " ";



Method 2 : Analysis line by line
sp st
4  1
3  1
2  1
1  1
0  1

*/