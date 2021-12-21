/**
 * @file difference of two 1D Array's
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
    int res[maxSize]; 

    int borrow = 0;
    int i = arrSize1 - 1;
    int j = arrSize2 - 1;
    int k = maxSize - 1;

    while(k >= 0) {  // run till index 0 is reached
        int diff =  (a2[j] - borrow);
        if(i >= 0) 
            diff -= a1[i];

        if(diff >= 0) // +ve difference
        {
            borrow = 0;
            res[k] = diff;
        }
        else { // -ve hai tho borrow 10 from neighbour
            diff += 10; // borrow 10 
            borrow = 1; // update
            res[k] = diff;
        }
        
        i--; 
        j--;
        k--;
    }

    if(res[0] != 0) 
        cout << res[0] << endl;

   for(int i = 1 ; i < maxSize; i++) {
        cout << res[i] << endl;
    }

}