/**
 * @file Sum of two 1D Array's
 * 
 * @author Sidanth 
 */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int arrSize1;
    std::cin >> arrSize1;
    int a1[arrSize1];
    for(int i = 0; i < arrSize1; i++) { std::cin >> a1[i]; }

    int arrSize2;
    std::cin >> arrSize2;
    int a2[arrSize2];
    for(int i = 0; i < arrSize2; i++) { std::cin >> a2[i]; }

    int maxSize = arrSize1 > arrSize2 ? arrSize1 : arrSize2 ;
    int res[maxSize]; // resultArray

    int carry = 0;
    int i = arrSize1 - 1;
    int j = arrSize2 - 1;
    int k = maxSize - 1;

    while(k >= 0) { // run till resArray is full filled 
        int sum = carry;
        if(i >= 0)  // till a1 element are left. add
            sum += a1[i]; 
        if(j >= 0)  // till a2 element are left. add
            sum += a2[j]; 

        int d = sum % 10;
        carry = sum / 10;
        res[k] = d;
        i--; 
        j--;
        k--;
    }
    if(carry != 0) std::cout << carry << std::endl;

    for(int i = 0 ; i < maxSize; i++) {
        cout << res[i] << endl;
    }

}
