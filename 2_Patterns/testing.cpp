#include <iostream>

int main() {
    int n ;
    std::cin>> n;
    int st1 = n / 2;  // st1 = stars with some pattern
    int st2= n / 2;   // st2 = remaining stars
    /*
    st1 st2 
    2   2
    1   3
    0   4
    1   3
    2   2  
    // combining these two st1 and st2 we use OR operator
    */

    for(int i = 0 ; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(st1 == j || st2 == j)
            std::cout<< "*\t";
            else
            std::cout<< "\t";

        }
       
        if(i < n/2){
            st1--;
            st2++;
        }
        else {
            st1++;
            st2--;
        }
         std::cout<<"\n";
    }
    
}