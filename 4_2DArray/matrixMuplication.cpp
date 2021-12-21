#include <iostream>

void LogA2d(int** a2d, int row, int col) {

    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            std::cout << a2d[i][j] << "     ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int r1, c1, r2, c2;
    std::cin >> r1 >> c1;
    int** a1 = new int*[r1];
    for(int i = 0 ; i < r1 ; i++) {
        a1[i] = new int[c1];
    }

    for(int i = 0; i < r1 ; i++) {
        for(int j = 0; j < c1; j++) {
            std::cin >> a1[i][j];
        }
    }

    std::cin >> r2 >> c2;
    int** a2 = new int*[r2];
    for(int i = 0 ; i < r2 ; i++) {
        a2[i] = new int[c2];
    }

    for(int i = 0; i < r2 ; i++) {
        for(int j = 0; j < c2; j++) {
            std::cin >> a2[i][j];
        }
    }

    int** product = new int*[r1];   // row of first matrix
        for(int i = 0 ; i < r1; i++) { 
            product[i] = new int[c2]; // columne of second matrix
        }


    if(c1 != r2) {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    else
    {
        int i, j, k;
for(i=0; i<r1; ++i)   // row of first matrix
      for(j=0; j<c2; ++j)  // columne of second matrix
        for(k=0; k<c1; ++k) {  // common prop. in both matrix's
         product[i][j] += a1[i][k] * a2[k][j];
        }
    }
    LogA2d(product, r1, c2);
}

/*

for(int i = 0; i < r1 ; i++) {

    for(int j = 0; j < c2; j++) {

        for(int k = 0; k < ? ; k++) {

            product[i][j] +=  a[i][?] * b[?][j] ; 
           // row of product is same with row of a1 
           // colume of product is same with columne of a2
           // and we have observed the ? is starts from 0 to c1 or r2

        }
    }
}
*/