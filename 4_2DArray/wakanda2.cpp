#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int arr[n][n];
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            std::cin >> arr[i][j];
        }
    }
    
    int minr = 0, minc  = 0;
    int maxr = n - 1, maxc =  n - 1;

    for(int k = 0; k < n ; k++) {
        for(int i = minc, j = k; i <= maxc; i++, j++) {
            std::cout <<  arr[i][j] << std::endl;
        }
        maxc--;
    }
}