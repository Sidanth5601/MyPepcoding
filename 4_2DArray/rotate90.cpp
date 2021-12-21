#include <iostream>

void swap(int& a, int& b);
void transposeOfMatrix(int** arr, int row, int col);
void logA2d(int** arr, int row, int col);

/**
 * @brief display 2d Array row X col onto the conssole
 * @param arr  pointer to 2d array
 * @param row  no of row's 
 * @param col  no fo column's
 * 
 * @return void
 * 
 */
void logA2d(int** arr, int row, int col) {
    for(int i  = 0; i < row;  i++) {
        for(int j  = 0; j < col;  j++) {
        std::cout <<  arr[i][j] << " ";
         }
         std::cout << std::endl;
    }
}

/**
 * @brief transpose of 2d matrix row X col 
 * @param arr  pointer to 2d matrix
 * @param row  no of row's 
 * @param col  no of column's
 * 
 * @return void
 * 
 */
void transposeOfMatrix(int** arr, int row, int col) {
     for(int i = 0; i < row; i++) {
        for(int j = i; j < col; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

/**
 * @brief : swapping 2 integer's
 * 
 * @param a  reference to first integer
 * @param b  reference to second integer
 * 
 * @return void
 * 
 */
void swap(int& a, int& b) {  
    int temp  = a; 
    a = b;
    b = temp;
}

int main() {
    int n;
    std::cin >> n ;
    int** arr = new int*[n];
    for(int i  = 0; i < n;  i++) {
        arr[i] = new int[n];
    }
    for(int i  = 0; i < n;  i++) {
        for(int j  = 0; j < n;  j++) {
        std::cin >> arr[i][j];
         }
    }

    transposeOfMatrix(arr, n, n); // transposed the gived matrix

    // reversing row elements
    int i = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0, k = n -1; j < k; j++, k--) {
            swap(arr[i][j], arr[i][k]);
        }
    }

    logA2d(arr, n, n);

}