#include <iostream>
#include <string>
#include <iostream>

int factorial(int n) {
    if(n == 0) return 1;      // base case
    return ( n * factorial(n-1) ); // general case 
}

int main() {

    std::string str ;
    std::cin >> str;

    int f = factorial( str.length() );

    for(int i = 0 ; i < f ; i++) { // run no of factorial times 

        std::string sb(str); //  copy constructor will be called, sb = str;
        int div = str.length(); // divisor
        int temp = i; // diviend is i, but we don,t to change it so temp is used

        while ( div ) {
            int rem = temp % div;
            int quo = temp / div;

            std::cout << sb[rem];
            sb.erase( sb.begin() + rem );

            temp = quo ;  // update diviend for next 
            div--;     // update divisor for next 
        }
        std::cout << std::endl;

    }
}