#include <vector>
#include <iostream>
#include <algorithm>

void LogA2d(int** a2d, int row, int col);
void rotateShell(int** arr, int s, int r, int row, int col);
std::vector<int>* fillOnedFromShell(int** arr, int s, int row, int col);
std::vector<int> rotateOnedArray ( std::vector<int>* res, int r );
void reverseOnedArray( std::vector<int>* vec );
void fillShellFromOned(int** arr, int s, int row, int col,  std::vector<int>* rotated );

void LogA2d(int** a2d, int row, int col) {

    for(int i = 0; i < row ; i++) {
        for(int j = 0; j < col; j++) {
            std::cout << a2d[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

void rotateShell(int** arr, int s, int r, int row, int col) {

    std::vector<int>* oned = fillOnedFromShell(arr, s, row, col);
    std::vector<int>* rotated1d = rotateOnedArray ( oned, r );
    fillShellFromOned( arr, s, row, col, rotated1d );

}
std::vector<int>* fillOnedFromShell(int** arr, int s, int row, int col) {
    int minr = 0, minc = 0;
    int maxr = row - 1, maxc = col - 1;

   // reaching the correct shell s-1 times shift all corners 
   for(int i = 0; i < s -1 ; i++) {
       minr++;
       maxr--;
       minc++;
       maxc--;
   } 
   
   std::vector<int> *res =  new std::vector<int>(); // heap allocated vector<> becoz returning result outside, it should be alive
   
    for(int i = minr, j =  minc; i <= maxr ; i++) {
        res->push_back( (int) arr[i][j] );
    }
    for(int i = maxr, j = minc + 1; j <= maxc ; j++) {
        res->push_back( arr[i][j] );
    }
    for(int i = maxr - 1, j = maxc; i >= minr; i-- ) {
        res->push_back( arr[i][j] );
    }
    for(int i = minr, j = maxc - 1; j <= minc ; j-- ) {
        res->push_back( arr[i][j] );
    }
return res;
}

std::vector<int> rotateOnedArray ( std::vector<int>* res, int r ) {
    r = r % 4;  // if r is greater than 4 means take mod of 4 
    if( r <  0 )
    r = r + 4; // if r is -ve then make it to its +ve equivalent
     
    std::vector<int>* firstPart = new std::vector<int>();
    for(int i = 0; i < res->size() - r ; i++ ) {
        firstPart->push_back( res->at(i) );
    }
    std::vector<int>* secondPart =  new std::vector<int>();
    for(int i = res->size() - r; i < res->size(); i++) {
        secondPart->push_back( res->at(i) );
    }
    reverseOnedArray(firstPart);
    reverseOnedArray(secondPart);

    std::vector<int> merged;
    std::merge(firstPart->begin(), firstPart->end(), secondPart->begin(), secondPart->end(), std::back_inserter(merged));

return merged;

}
void reverseOnedArray( std::vector<int>* vec ) {
    for(int i = 0, j = vec->size() - 1; i <= ( vec->size() / 2 ) ;  i++, j-- )
    {
        int temp = (int)vec->at(i);
        vec->insert(vec->begin() + i, vec->at(j)); // insert at ith index
        vec->insert(vec->begin() + j, temp); // insert at jth index
    }
}   


void fillShellFromOned(int** arr, int s, int row, int col,  std::vector<int>* rotated ) {
    int minr = 0, minc = 0;
    int maxr = row - 1, maxc = col - 1;

   // reaching the correct shell s-1 times shift all corners 
   for(int i = 0; i < s -1 ; i++) {
       minr++;
       maxr--;
       minc++;
       maxc--;
   } 
   int k = 0;
   
    for(int i = minr, j =  minc; i <= maxr ; i++) {
        arr[i][j] = rotated->at(k++); 
    }
    for(int i = maxr, j = minc + 1; j <= maxc ; j++) {
        arr[i][j] = rotated->at(k++); 
    }
    for(int i = maxr - 1, j = maxc; i >= minr; i-- ) {
        arr[i][j] = rotated->at(k++); 
    }
    for(int i = minr, j = maxc - 1; j >= minc ; j-- ) {
        arr[i][j] = rotated->at(k++); 
    }

}

int main() {

    int n, m;
    std::cin >> n >> m;

    // dynamically allocated 2d array
    int** arr = new int*[n];
    int** res = new int*[n];
    for(int i = 0; i < n ; i++) {
        arr[i] =  new int[m];
        res[i] =  new int[m];
    }

   
    int s, r; // s - shellno,  r - rotation +ve antiClock, -ve clockwise
    std::cin >> s >> r;
    
    rotateShell( arr, s, r, n, m );
    LogA2d(arr, n, m);


}