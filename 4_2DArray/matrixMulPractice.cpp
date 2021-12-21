#include <iostream>

void logA2d(int** a2d, int row, int col) {

    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            std::cout << a2d[i][j] << " ";
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
  
    int** product = new int* [r1];
    for(int i = 0; i < r1; i++) {
            product[i] = new int[c2];
    }
    
    
    if(c1 != r2){
        std::cout << "Invalid input" << std::endl;
        return 0; 
    } 
    else {
     int i, j, k; 
        for( i = 0; i < r1; i++)  // row of A
            for( j = 0; j < c2; j++) // col of B
                for(k = 0; k < c1; k++) {
                    product[i][j] += a1[i][j] * a2[j][k];
                }
    }
    logA2d(product, r1, c2);

}