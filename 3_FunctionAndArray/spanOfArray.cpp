#include <iostream>

int spanOfArray(int* arr, int n) {

    int max = arr[0], min = arr[0] ;
    
    for(int i = 0; i < n; i++) {
        
        max = max < arr[i] ? arr[i] : max;
        min = min > arr[i] ? arr[i] : min;
    }
   // std::cout << min << std::endl;
   // std::cout << max << std::endl;
    return max - min;
}

int main() {
    int arraySize ;
    std::cin>> arraySize;
    int* arr = new int[arraySize];

    for(int i = 0; i < arraySize; i++) {
        std::cin >> arr[i];
    }

    std::cout << spanOfArray(arr, arraySize) << std::endl;
    

}