#include<iostream>
using namespace std;

void rotate(int* arr, int n, int k){
   // write your code here
   int* res = new int[n];

   k = k % n; // to accomadate k > count/size case

    if(k<0)   // to check if k is negative
    {
     k = k + n ; // to accomodate -ve k cases
    }
    int i , j ;
    // copy arr from index n - k till end 
    // and insert it in the res from index 0
    for(i = n - k, j = 0 ; i < n ; i++, j++) {
        res[j] = arr[i];
    }
    // now insert the remaining front elements of arr in res where j is currently
    for(i = 0 ; i < n-k ; i++, j++) {
        res[j] = arr[i];
    }
    //copy the result array in arr 
    for(i = 0 ; i < n ; i++) {
        arr[i] =  res[i];
    }

    delete res; 
    res = nullptr;
   
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        std::cout <<arr[i]<<" ";
    }
    std::cout <<endl;
}

int main(){
    int n, r;
    std::cin >> n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        std::cin >>arr[i];
    }
    std::cin >> r;
    
    rotate(arr,n,r);
    display(arr,n);
}