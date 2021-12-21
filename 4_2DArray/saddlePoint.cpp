#include <iostream>

// rowMin Algo: traverse --> row-wise --> and find min in that nthRow
// pre : row in which smallest element index is to be found , square Matrix 2d Array, dimension of 2D array
// post : return the Column index where minimum element exist
int rowMin(int** arr, int nthRow, int n) { 
     
    int colIndex = 0;
  
    int i = nthRow, j = 0; 
    int item = arr[i][j];
    int min = arr[i][j];
    for( i = nthRow, j = 0, min = arr[i][j] ; j < n ; j++) {
            min = arr[i][j] <= min ? arr[i][j] : min ; 
            if( item != min ){ // only if min changes then assign colIndex to new_min j-index
                colIndex = j;
                item = min;
            }
    }
/*
    testing
   std::cout << "minimum of  " << nthRow << " row " << min << " and j value  " <<  colIndex << std::endl ;
*/
   return colIndex; // colIndex of smallest element in that particular row
  
}

int findSaddle( int** arr, int n ) {
    int saddlePoint = -1; // means not found yet 
    
    for(int i = 0; i < n ; i++) {

        int j = rowMin(arr, i, n); //  the colIndex, where the minElement in that ithRow exists
        int max = arr[i][j], min =  arr[i][j] ;

            for( int k = 0 ; k < n ; k++ ){ // now traverse downward in the colIndex 
            max =  arr[k][j] >= max ? arr[k][j] : max; // finding the max element in kth colume
           /* 
           testing
            std::cout << "maximum of  " << i << "th row " << max  << " and k value  " << k << std::endl ;
            */
        }
        if( max == min ) { // to find whether the minValue in that row is equal to maxValue in colume or not
            saddlePoint = max ; // means we found it successfully
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
    
    int saddlePoint = findSaddle(arr, n);
    if ( saddlePoint == -1 )  std::cout << "Invalid input" << std::endl;
    else std::cout << saddlePoint << std::endl;
}