#include <iostream>

int main() {
    int n, m ;
    std::cin >> n >> m;

    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
        }
    }

    int minr = 0, minc = 0;
    int maxr = n - 1, maxc = m - 1;

    int count = 0; // count of no of elements printed
    int tne = n * m; // total no of elements 
    // 4 loops for 1 box traversal

    while( count < tne ) {

        for(int i = minr, j = minc; i <= maxr && count < tne; i++) { // left wall
            std::cout << arr[i][j] << std::endl;
            count++;
        }
    minc++;
        for(int i = maxr, j = minc; j <= maxc && count < tne; j++) { // bottom wall
            std::cout << arr[i][j] << std::endl;
            count++;
        }
    maxr--;
        for(int i = maxr, j = maxc; i >= minr && count < tne; i--) { // right wall
            std::cout << arr[i][j] << std::endl;
            count++;
        }
    maxc--;
        for(int i = minr, j = maxc; j >= minc && count < tne; j--) { // upper wall
            std::cout << arr[i][j] << std::endl;
            count++;
        }
    minr++;
    }


}

/* alternative for removing corners

int minr = 0, minc = 0;
int maxr = n - 1, maxc = m - 1;

    // 4 loops required for 1 box printing

    for(int i =  minr, j = minc; i <= maxr ; i++) { // Left wall ---> minc
        std::cout << arr[i][j] << std::endl;
    }
    for(int i = maxr, j =  minc; j <= maxc ; j++) { // Bottom wall ---> maxr
        if(j == minc) { // leave bottom left corner
            continue;
        }
        else
        std::cout << arr[i][j] << std::endl;

    }
    for(int i =  maxr, j = maxc; i >= minr ; i--) {    // Right wall --> maxc
        if( i == maxc) { // leave bottom right corner
            continue;
        }
        else
        std::cout << arr[i][j] << std::endl;

    }
    for(int i = minr, j =  maxc; j >= minc ; j--) {    // upper wall --> minr
        if(j == maxc || j  == minc ) { // leave top right corner
            continue;
        }
        else
        std::cout << arr[i][j] << std::endl;

    } 
    
    // but where to stop,
    // stop when all element are printed
    // so, we maintain a count pointer for counting how many elements are printed
    // till it reach total no of elements i.e n * m
    
    
    */