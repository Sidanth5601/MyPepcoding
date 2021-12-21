#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        std::cin>>arr[i];
    }
    int data;
    std::cin>>data;

    int l = 0;
    int h = n - 1;
    int mid = 0;
    int flag = 0; // 0 - match not found!! ......  1 - match found

    int lastIndex = 0;
    while ( l <= h ) {
        mid = (l + h) / 2;
        if ( data > arr[mid] ) {
            l = mid + 1;
        }
        else if ( data < arr[mid] ) {
            h = mid - 1;
        }
        else {
            flag = 1;
            lastIndex = mid;
            l = mid + 1; // find right most match
        } 
    }

    l = 0;
    h = n - 1;
    int firstIndex = 0;
    while ( l <= h ) {
        mid = (l + h) / 2;
        if ( data > arr[mid] ) {
            l = mid + 1;
        }
        else if ( data < arr[mid] ) {
            h = mid - 1;
        }
        else {
            firstIndex = mid;
            h = mid - 1; // find left most match
            
        } 
    }
    if ( !flag ) std::cout << "-1\n" << "-1" << std::endl;
    else 
    std::cout << firstIndex << "\n" << lastIndex << std::endl;
}