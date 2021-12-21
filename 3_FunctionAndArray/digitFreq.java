// input : 112121 1
// output: 4

import java.util.*;

public class digitFreq {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int d = scn.nextInt();
        int f = getDigitFrequency(n, d);
        System.out.println(f);
    }

    public static int getDigitFrequency(int n, int d) {
        int count = 0;
        
        while (n != 0) {
            int digit = n % 10;  // lastDigit 
            if(digit == d) count++;
            n /= 10; // update the n for next lastDigit
        }
        return count;
    }
}