#include <iostream>

int main() {
    int arrSize;
    std::cin >> arrSize;

    int* arr =  new int[arrSize];

    for(int i = 0 ; i < arrSize ; i++) { // intialisation of arr by user
        std::cin >> arr[i] ;
    }

    int max = arr[0]; // greatest element
    for(int i = 0 ; i < arrSize ; i++) {
        if(  max < arr[i] )
        max = arr[i];
    }
    std::cout << max ;

     for(int i = 0 ; i < max; i++) {  // rows  = greatest element of the array
        for(int j = 0; j < arrSize; j++) { // columes = arrSize 
            if ( i >= ( max - arr[j] ) )
            std::cout << "*\t" ;
            else
            std::cout << "\t";
        }
        std::cout << std::endl;
        
    }
}