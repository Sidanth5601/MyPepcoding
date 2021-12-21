import java.util.*;

public class pattern6 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int sp = n / 2;  // 5 / 2 == 2.5 (2)
        int st = sp + 1;

        for(int i = 0; i < n; i++) {

            for(int j = 0 ; j < st; j++) System.out.print("*	");
            for(int j = 0 ; j < sp; j++) System.out.print("	");
            for(int j = 0 ; j < st; j++) System.out.print("*	");

            if( i < n/2 )  {
                sp += 2;
                st--;
            }
            else {
                sp -=2 ;
                st++;
            }
            System.out.println();
        }
    
    }
}

/* 
Explaination :

Lets logically analysis the pattern and 
see how many stars and space are there in one line and in which pattern

n = 5 , sp = space , st = star

We can see first there are 3 stars followed by a space, followed again by 3 stars

In this pattern, on each line, 
spaces increase or decrease by 2
in comparison to the line above it, 
and stars increment or decrement by 1.

st sp st
3  1  3
2  3  2
1  5  1
2  3  2
3  1  3

lets print this output first usint loop for n line i.e for eg 5 lines is given above in comment

        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int sp = n / 2;  // 5 / 2 == 2.5 (2)
        int st = sp + 1;

        for(int i = 0; i < n; i++) {

            if( i < n/2 )  {
                sp += 2;
                st--;
            }
            else {
                sp -=2 ;
                st++;
            }
            System.out.println();
        }


output is st sp st :
5
3  1  3
2  3  2
1  5  1
2  3  2
3  1  3


Now we just replace these numbers in output,
by placing actual spaces and stars equal to these numbers,
using simple loops; as we have been doing in all the patterns leading upto now

As shown Above in code

*/
