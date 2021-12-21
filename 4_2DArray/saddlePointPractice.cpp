#include <iostream>

int rowMin(int** arr, int nthRow, int n) {

    int colIndex = 0;

    int i = nthRow;
    int j = 0;
    int min =  arr[i][j];
    int item =  arr[i][j] ; // for tracking when the  change in the  min happpen, if no change happened in min, means min is same as the previous Min 
    for( min = arr[i][j] ; j < n ; j++) {
        min =  min > arr[i][j] ? arr[i][j] : min;
        if(item != min) { // if min gets changed
            colIndex = j ; // update the colIndex of new min 
            item  = min; // update the item for next item != min check
        }
    }

   std::cout << "minimum of  " << nthRow << " row " << min << " and j value  " <<  colIndex << std::endl ;
    return colIndex;

}

int findSaddlePoint(int** arr, int n) {
    int saddlePoint = -1 ; // not found yet

    for(int i = 0; i < n; i++) {
        int j = rowMin(arr, i, n);
        int min = arr[i][j];
        int max = 0;
        for(int k = 0 ; k < n; k++ ) {
            max = max < arr[k][j] ? arr[k][j] : max;
            std::cout << "maximum of  " << i << "th row " << max  << " and k value  " << k << std::endl ;
        }
        if( min == max ) {
            saddlePoint =  max; // found the saddlepoint, stop  
            break;
        } 
    }

    return saddlePoint;
}

int main() {
    int n ;
    std::cin >> n;

    int** arr = new int*[n];
    for(int i = 0; i < n ; i++) {
        arr[i] = new int[n];
    }

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n ; j++) {
           std::cin >> arr[i][j] ;
        }
    }

    int saddlePoint =  findSaddlePoint(arr, n);
    if(saddlePoint == -1) std::cout << "Invalid input" << std::endl;
    else
    std::cout << saddlePoint << std::endl;

}