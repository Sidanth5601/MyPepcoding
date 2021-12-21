
#include <bits/stdc++.h>
#include <vector>

int main() {
    
    int testCase, noOfPipes;
    std::vector<int> L;
    int result[200];

    int cost = 0;
    int index = 0;

    std::cin >> testCase;
    for(int i = 0 ; i < testCase ; i++){

        std::cin >> noOfPipes;


        for(int j = 0 ; j < noOfPipes; j++) {
            int temp ;
            std::cin >> temp ;
            L.push_back(temp) ;
            }        
        std::sort ( L.begin(), L.end() ); // sorting
        for(int k = 0; k < noOfPipes - 1; k++) {
            int sum = ( L[0] + L[1] ) ;
            L[0] = sum;
            cost += sum;
            L.erase( L.begin() + 1 );
        }
        result[index++] = cost ;
      
        cost = 0; // reset

    }  
    for(int i = 0; i < testCase ; i++){
         std::cout << result[i] << std::endl;
    }
   
}