#include <iostream>

void LogA2d(int** a2d, int row, int col) {

    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            std::cout << a2d[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    int row, col;
    std::cin >> row >> col;

    // dynamically allocated 2d Array
    int** a2d = new int*[row];
    for(int i = 0; i < row ; i++) {
        a2d[i] =  new int[col];
    }
    // initialization of 2d Array
    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            std::cin >> a2d[i][j];
        }
    }
    LogA2d(a2d, row, col);

}