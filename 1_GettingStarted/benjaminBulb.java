import java.util.*;

public class benjaminBulb {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int bulbCount = scn.nextInt();
        
        int[] arr = new int[bulbCount] ; 
        Arrays.fill(arr, 0); // memset(arr,'0',6) c++
        
        int div = 1;
        // while loop no of passes =  bulbCount
        while(div <= bulbCount) {
            for(int i = 0; i < arr.length; i++) {
                if( (i + 1) % div == 0 ) {
                    if(arr[i] == 0) arr[i] = 1; // 0 --> 1
                    else arr[i] = 0; // 1 --> 0
                }
            }
        }

        // where arr[i] ==  1 that is bulb 'ON' so, print the index
        for(int i = 0; i < arr.length; i++) {
            if( arr[i] == 1 ) System.out.println(i + 1);
        }

    }
    
}
