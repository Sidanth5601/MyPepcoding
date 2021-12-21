#include <iostream>

int main() {
    int arrSize ;
    std::cin >> arrSize;

    int* arr = new int [arrSize];
    for(int i = 0 ; i  < arrSize ; i++) {
        std::cin >> arr[i];
    }

    int d ; // find item 
    std::cin >> d;
    int idx = -1;

    for(int i = 0 ; i  < arrSize ; i++) {
        if(d == arr[i]) {
            idx = i;
            break;
        }
    }
    std::cout << idx ;    
}
