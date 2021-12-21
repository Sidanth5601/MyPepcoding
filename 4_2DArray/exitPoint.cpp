#include <iostream>

int main() {
    int n, m ;
    std::cin >> n >> m;

    int** arr = new int*[n];
    for(int i =  0; i < n; i++) {
        arr[i] = new int[m];
    }
    
    // input
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < m; j++) {
            std::cin >> arr[i][j] ;
        }
    }
    
    int dir = 0 ; // 0 - e , 1 - s, 2 - w, 3 - n
    int i = 0 ;
    int j = 0 ;

    while (true) {
        dir = ( dir + arr[i][j] ) % 4;
        if(dir == 0) { // east
            j++;
        }
        else if(dir == 1) { // south 
            i++;
        }
        else if (dir == 2) { // west
            j--;
        }
        else if(dir == 3) { // north
            i--;
        }

        if(i < 0) {
            i++; // when we exit reset the i or j to valid position
            break;
        }
        else if( j < 0) {
            j++;
            break;
        }
        else if(i == n) {
            i--;
            break;
        }
        else if(j == m) {
            j--;
            break;
        }

    }
    std::cout << i << std::endl;
    std::cout << j << std::endl;
}