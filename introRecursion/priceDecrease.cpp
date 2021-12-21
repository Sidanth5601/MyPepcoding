#include <iostream>

void priceDecrease(double n) {
    if(n == 0){ return; }
    else                          // else is not required the return inside the if(n==0) works as else 
    std::cout << n << std::endl;
    priceDecrease(n - 1);
}

void priceDecrease(int n) {
    if(n == 0) {
        return;
    }
    std::cout << n << std::endl;
    priceDecrease(n - 1);

}

int main() {
    int n ;
    double n2;
    std::cin >> n;
    std::cin >> n2;
    priceDecrease(n);
    priceDecrease(n2);

}


