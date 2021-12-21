#include <iostream>

int main() {
    int r, c;
    std::cin >> r >> c;
    int** a = new int*[r];
    for(int i = 0; i < r; i++) {
        a[i] =  new int[c];
    }
    //input 
    for(int i = 0 ; i < r; i++) {
        for(int j = 0 ; j < c; j++) {
            std::cin >>  a[i][j];
        }
    }

    for(int j = 0; j < c; j++) { // columne  is traversed first becoz we want to traverse downward not row-wise -->
        if(j % 2 == 0){
            for(int i = 0; i < r ; i++)
            std::cout << a[i][j] << std::endl;
        }
        else {
            for(int i = r - 1 ; i >= 0 ; i--)
            std::cout << a[i][j] << std::endl;
        }
    }

/*
    int vr = 0 ; // visiter path
    for(int j = 0 ; i < c; i++) {  // columne  is traversed first becoz we traverse colume-wise(downward) not row-wise(side ways left 2 right)
        if (j % 2 == 0) vr = 0;
        else vr = r-1;
        for(int i = 0 ; i < r; i++) {
            std::cout << a[vr][j] << " ";
            if(j % 2 == 0) vr++; 
            else vr--;
        }
        std::cout << std::endl;
    } */
}