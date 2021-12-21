#include<iostream>

long int powerLogarithmic(long int x, long int n) {
    if(n == 0) return 1;
    long int xpnb2 = powerLogarithmic(x, n/2); 
    long int xpn = xpnb2 * xpnb2;    // faith 

    if(n % 2 != 0) {   // if odd multiple one extra x
       xpn = xpn * x;  // achieving expectation using the faith
    }
    return xpn;
}

int main() {
    long int x, n;
    std::cin >> x >> n;
    std::cout << powerLogarithmic(x, n);
}