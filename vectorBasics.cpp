// Dynamically Growing Array

#include <vector>
#include <bits/stdc++.h>

int main() {
    std::vector<int> myvector(3, 100);
    //  auto it = myvector.begin(); same as below
    std::vector<int>::iterator it = myvector.begin();

    it = myvector.insert(it, 200) ; // 'it' is again used to store the return value of insert()
    myvector.insert(it, 2, 300); // no 'it' is no more valid 
    
    it = myvector.begin();

    std::vector<int> anothervector(2, 400);
    myvector.insert(it + 2, anothervector.begin(), anothervector.end() );

    int arr[] = { 502, 503, 504 };
    myvector.insert( myvector.begin(), arr, arr + 3) ;

    std::cout << "myvector contains: " << std::endl;
    for(it = myvector.begin(); it != myvector.end() ; it++) {
        std::cout << ' ' << *it;
    }
    
        std::cout << '\n';

}