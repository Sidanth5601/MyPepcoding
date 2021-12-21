import java.util.*;

public class pattern7 {

    public static void main (String[] args) {

        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int sp = 0; // sp = space
        int st = 1; // st = star

        for(int i = 0; i < n ; i++) {

            for(int j = 0; j < sp ; j++) System.out.print("   ");
            for(int j = 0; j < st ; j++) System.out.print("*  ");

            sp++;

            System.out.println();
        }
    }
}
/*
Method 1: Grid
i j
0 0
1 1
2 2
3 3
4 4
condition comes as j == i  
if(j == i) cout<<"* ";
else  cout << " ";

method 2:
sp st
0  1
1  1
2  1
3  1
4  1


*/