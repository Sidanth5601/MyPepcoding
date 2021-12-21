#include <iostream>

void priceIncrease(int n) {

    if(n == 0) {
        return;
    }

    priceIncrease(n-1);
    std::cout << n << std::endl;
}

int main() {
    int n ;
    std::cin >> n;
    priceIncrease(n);
}
