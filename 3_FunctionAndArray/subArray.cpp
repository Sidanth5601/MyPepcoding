#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    int i, j , k;
    
    for( i = 0; i < n ; i++) {
        for( j = i; j < n; j++) {
            for( k = i ; k <= j; k++) {  // k from i to j ---/> [i, j]
                std::cout << arr[k] << "\t";
            }
            std::cout << std::endl;
        }
    }
    
}