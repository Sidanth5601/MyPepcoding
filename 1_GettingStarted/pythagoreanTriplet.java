import java.util.*;

public class pythagoreanTriplet {
   public static boolean isPythagoreanTriplet(int a, int b, int c) {

        int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

        if (max == a)
        return ( ( (b * b) + (c * c) ) == (max * max) );

        if (max == b)
        return ( ( (a * a) + (c * c) ) == (max * max) );

        else
        return ( ( (a * a) + (b * b) ) == (max * max) );

    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int a = scn.nextInt();
        int b = scn.nextInt();
        int c = scn.nextInt();

       if( isPythagoreanTriplet(a, b, c) ) System.out.println("true");
       else System.out.println("false");
    }
}
