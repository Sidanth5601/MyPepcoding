#include <iostream>

int main() {
    int n ;
    std::cin >> n ;

    int** arr = new int*[n] ;
    for(int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cin >> arr[i][j];
        }
    }
    int item ;
    std::cin >> item ;

    int minr = 0;
    int maxc = n -1;

    int i = minr;
    int j = maxc;
    int flag = 0;  // not yet found 
    while( i < n && j >= 0 ) {
        if(item < arr[i][j]) {
            j--;
        }
        else if (item == arr[i][j]) {
            flag = 1; // successfully found the item
            std::cout << i << "\n" << j << std::endl;
            break;
        }
        else if (item > arr[i][j]) {
            i++;
        }
    }

    if (flag == 0) std::cout << "Not Found" << std::endl;
}