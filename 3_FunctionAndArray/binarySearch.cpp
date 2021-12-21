#include <iostream>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int h, int data)
{
    if (l <= h) {
        int mid = l + (h - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == data)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > data)
            return binarySearch(arr, l, mid - 1, data);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, h, data);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}

int main() {
    int n;
    std::cin >> n;
    int* arr =  new int[n];
    for(int i = 0 ;i < n; i++) {
        std::cin >> arr[i];
    }
    int data ; // which element to be found
    std::cin >> data;

    int l = 0; // lower bound
    int h = n - 1 ; // upper bound
    int found = binarySearch( arr, l, h, data );
    (found == -1) ? std::cout << "-1" << std::endl : std::cout << found << std::endl;
}

    // while (l <= h) {
        // int mid = (l + h) / 2;
        // if( data > arr[mid] )
        // l = mid + 1;
        // else if ( data < arr[mid] ) 
        // h = mid - 1;
        // else {
            // flag = 1; // means successfully  found 
        // std::cout << mid << std::endl;
        // return 0;
        // } 
    // }