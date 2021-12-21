#include <iostream>
typedef long long LL;


void LogA2d(int** a2d, int row, int col) {

    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            std::cout << a2d[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {

    int n, m;
    std::cin >> n >> m;

    // dynamically allocated 2d array
    long** arr = new long*[n];
    long** res = new long*[n];
    for(int i = 0; i < n ; i++) {
        arr[i] =  new long[m];
        res[i] =  new long[m];
    }

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
            res[i][j] = arr[i][j]; // copying the arr[][] into result array res[][]
        }
    }
   

    int s, r; // s - shellno,  r - rotation +ve antiClock, -ve clockwise
    std::cin >> s >> r;

    r = r % 4;  // if r is greater than 4 means take mod of 4  
    if( r <  0 )
    r = r + 4; // if r is -ve then make it to its +ve equivalent
    
    int minr = 0, minc = 0;
    int maxr = n - 1, maxc = m - 1;

   // reaching the correct shell s-1 times shift all corners 
   for(int i = 0; i < s -1 ; i++) {
       minr++;
       maxr--;
       minc++;
       maxc--;
   } 
 while (r) { // run this for r times

    for(int i = minr, j =  minc; i < maxr ; i++) {
        res[i + 1][j] = arr[i][j];
    }
    for(int i = maxr, j = minc; j < maxc ; j++) {
        res[i][j + 1] =  arr[i][j];
    }
    for(int i = maxr, j = maxc; i > minr; i-- ) {
        res[i - 1][j] = arr[i][j] ;
    }
    for(int i = minr, j = maxc; j > minc ; j-- ) {
        res[i][j - 1] = arr[i][j];
    }

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = res[i][j]; // so, that we can update the result array with latest rotated values in previous loop run
        }
    }
    r--; // rotation reduced each time, a complete rotation done
 }
LogA2d(res, n, m);

}