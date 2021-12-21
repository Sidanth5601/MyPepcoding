
#include <iostream>
#include <string.h>
#include <math.h>


int main() {
    int n;
    std::cin >> n;
    int* arr = new int [n];
    
    for(int i = 0 ; i < n; i++) {
        std::cin >> arr[i];
    }       
    
    int noOfSets = pow( 2, n);
    for(int i = 0 ; i < noOfSets  ; i++){ // i [0 to 7]

        std::string ss = "";
        int temp = i; // we need i in inner and also don't want to change

        for(int j = n - 1 ; j >= 0; j--) {  // How many times to divide the i by 2 ?? 
                                       // Ans : run loop no of elements times eg for 3 size , we need 3 binary digits 
                                       // why we run from (n to 0) not (0 to n) because we are starting with last index 
                                       // total times its going to run is same [0, n) is same as [n, 0)

            int rem = temp % 2; // getting digits of binary equivalent of i or temp 
            temp /= 2;

            if (rem == 0) {
                ss =  (std::string) "-\t" + ss ; // why not set += "_\t" 
                                    // becoz we are calculating the last digit result first i.e is we add dash first then add set at back
            }
            else {
               ss = std::to_string( arr[j] ) + "\t" + ss ; // same first add the position then add previous set to back of new element
            }        // to_string used to convert int to string becoze normal typecast is not possible
            

        } 
    std::cout << ss << std::endl;
        }
}
