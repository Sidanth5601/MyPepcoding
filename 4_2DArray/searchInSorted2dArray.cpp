#include <iostream>

int main() {
    int n ;
    std::cin >> n;

    int** arr = new int*[n];
    for(int i = 0; i < n ; i++) {
        arr[i] = new int[n];
    }

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n ; j++) {
           std::cin >> arr[i][j] ;
        }
    }
    int item; // element to find
    std::cin >> item;

    int i = 0; // start from top-right corner
    int j = n - 1;
    while ( i < n && j >= 0) {
        if(item  == arr[i][j]) {
            std::cout << i << '\n' << j << std::endl;
            return 0;
        }
        else if(item < arr[i][j]) { // if item is small then move left
            j--; 
        }
        else { // item is greater move down
            i++;
        }
    }
    std::cout << "Not Found" << std::endl;
}