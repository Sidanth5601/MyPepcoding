#include <iostream>

int main() {
    int n1;
    std::cin >> n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        std::cin >> a1[i];
    }

    int n2;
    std::cin >> n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        std::cin >> a2[i];
    }

    int* sum = new int[ n1 > n2 ? n1 : n2];
    int carry = 0;
/**
 * NOTE : observe carefully, for multiple iterator 
 * place iterator in desired location and use while loop -> helps in clear & neat code
 * 
 */
// place iterators at back of 1st array , 2nd array and sum array 
    int i = n1 - 1;
    int j = n2 - 1;
    int k = ( n1 > n2 ? n1 : n2 ) - 1;

    while ( k >=0 ) { // run till sumArray iterator reach its capacity
        int d = carry;
        
        if(i >= 0) {
            d += a1[i];  // still a1 element is left, add
        }
        if (j >= 0) {
            d += a2[j]; // still a2 element is left, add
        }
        
        d  %= 10 ; 
        carry = d / 10 ;
        sum[k] = d;

        i--; 
        j--;
        k--;
    }
    if(carry != 0) 
    {
        std::cout << carry << std::endl;    }

    for(int i = 0 ; i < (n1 > n2 ? n1 : n2); i++){
        std::cout << sum[i] << std::endl;
    }


}