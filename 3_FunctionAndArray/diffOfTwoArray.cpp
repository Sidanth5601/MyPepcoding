#include<iostream>

using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }

    
    int maxSize = n1 > n2 ? n1 : n2;
    int minSize = n1 < n2 ? n1 : n2;
    
    int diffSize = maxSize;
    int* sub = new int[diffSize];
    int diff =  n1 > n2 ? n1 - n2 : n2 - n1;
    int borrow = 0; // initially borrow is zero

    int i = 0;
    for( i = minSize - 1; i >= 0; i--) {
            if( a2[i + diff] > a1[i]) {  // if a2 > a1 no borrow needed and set borrow = 0
        sub[i + diff] = (a2[i + diff] -  borrow )+ (borrow * 10) - a1[i];
        borrow = 0;
            }  
        else { // if a2 < a1 , borrow needed and set borrow = 1 
            if(i = minSize - 1) { // spl case in first run no needed to subtract borrow
        borrow = 1;
        sub[i + diff] = a2[i + diff] + (borrow * 10) - a1[i];

            }
            else { // rest they need to subtract borrow 
        sub[i + diff] = (a2[i + diff] - borrow) + (borrow * 10) - a1[i];
        borrow = 1;
            }
        }
       
    } 
        // remaining elements of bigger array to be added 
        for( i = maxSize - 1 - minSize ; i >= 0 ; i--) {
            sub[i] = a2[i] - borrow;
            borrow = 0;
        }
    for(int i = 0; i < maxSize ; i++) {
        std::cout << sub[i] << std::endl;
    }

}