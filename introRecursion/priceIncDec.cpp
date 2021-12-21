#include <iostream>
 
void price_IncDec(int n) {
    if ( n == 0) {
        return;
    }    

    std::cout << n << std::endl;
    price_IncDec(n - 1);
    std::cout << n << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    price_IncDec(n);
}