import java.util.*;

public class pattern5 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int sp = n / 2;  // 5 / 2 == 2.5 (2)
        int st = 1;

        for(int i = 0; i < n; i++) {

            for(int j = 0 ; j < sp; j++) System.out.print("  ");
            for(int j = 0 ; j < st; j++) System.out.print("* ");

            if( i < n/2 )  {
                sp--;
                st += 2;
            }
            else {
                sp++;
                st -= 2;
            }
            System.out.println();
        }
    
    }
}


/* 
Explaination:

lets logically analysis how many space and star are in one particular line

--------step 0 how many row and col? both N times
--------step 1 Analysis line by line pattern

n = 5 , sp = space, st = star.

sp st
2  1     // line1
1  3     // line2
0  5     // line3
1  3     // line4
2  1     // lineN

        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
                                            
                                        
        int sp = n / 2;  // 5 / 2 == 2.5 (2)  ----------step 2 initialize starting of sp and st
        int st = 1;

        for(int i = 0; i < n; i++) {
            System.out.println(sp + " " + st); ------------step 2 print sp and st
            if( i < n/2 )  {                  ---------------step 3 update sp and st
                sp--;
                st += 2;
            }
            else {
                sp++;
                st -= 2;
            }
        }

output is sp st :

5
2 1
1 3
0 5
1 3
2 1

Now we just replace these numbers in output,
by placing actual spaces and stars equal to these numbers,
using simple loops; as we have been doing in all the patterns leading upto now.

which is coded above ^
*/