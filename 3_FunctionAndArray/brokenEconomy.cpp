#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    int l = 0; // lower bound
    int h = n - 1 ; // upper bound
    int flag = 0; // not yet found!!
    int mid = 0;
    
    while ( l <= h ) {
        mid = ( l + h ) / 2;
        if ( data > arr[mid] ) {
            l = mid + 1;
        }
        else if( data < arr[mid] ) {
            h = mid - 1;
        }
        else {
            flag = 1; // found
            std::cout << arr[mid] << std::endl;
            break;
        }

    }
    if( !flag ) { // if match not found 
        if (arr[mid] > data )
        std::cout << arr[mid] << "\n" << arr[mid - 1] << std::endl;
        else if ( arr[mid] < data )
        std::cout << arr[mid + 1] << "\n" << arr[mid] << std::endl;
    }
    else {
        std::cout << "-1" << std::endl;
    }

    
}