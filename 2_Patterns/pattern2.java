import java.util.*;

public class pattern2 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if( j < (n-i) )
                System.out.print("* ");
                else
                System.out.print(" ");
            }
            System.out.println();
        }
    }
    
}
// step 0 : how many row and col? both same N row and N col
// step 1 : Analysis 1st line, in terms of how manys star and space
// step 2 : initialize sp and st to their general starting point
// step 3 : print sp and st 
// step 4 : update sp and st for next line1

// finalliy, replace the sp and st with star and space 
// using loop till [StartOfspaces, no of spaces in that particular line (sp)]
// using loop till [StartOfstars, no of stars in that particular line (st)]



    /*
    import java.util.*;
                            public class Main{
                                public static void main(String[] args)
                                {
                                    Scanner scn = new Scanner(System.in);
                                    int n  = scn.nextInt();
                                    int sp = n-1,st = 1; // sp = spaces ; st = stars
                                    for(int i =1; i<=n;i++)
                                    {
                                       for(int j = 1;j<=sp;j++)     // runs till the number of spaces on particular line
                                       {                            
                                           System.out.print("	");  //prints the number of spaces required on the line
                                       }
                                       for(int j = 1;j<=st;j++)    // runs till the number of stars on particular line
                                       {
                                           System.out.print("*	"); //prints the number of stars required on the line
                                       }
                                        sp--;                      //decrementing the spaces by 1 for next line     
                                        st++;                      //incrementing the stars by 1 for next line
                                        System.out.println();      //Adding new line for output on console
                                    }
                                }
                            }
    */