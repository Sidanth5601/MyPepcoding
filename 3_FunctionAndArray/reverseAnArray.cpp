#include<iostream>
using namespace std;

void reverse(int* arr, int n){
    // write your code here
    for(int i = n - 1, j = 0; i >= n/2 ; i--, j++) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    display(arr,n);
}