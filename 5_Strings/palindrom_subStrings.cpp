#include <iostream>
#include <string>

int main () {

    std::string str ;
    std::cin >> str ;

    std::string subStr;

    int i, j, k;
    for( i = 0 ; i < str.length(); i++ ) {
        for( j = i ; j < str.length(); j++) { // why? j = i , ans : becoz when subString k loop is entered first
        //  we need only one character as substring initially then , gradually increase the 1, 2, 3...till j
            subStr = "" ;                     // reset for next subSet
            for ( k = i ; k <= j ; k++) {  // k from i to j 
                 subStr += str[k];
            }
           int palindrom = -1;
           int mid = subStr.length() / 2; //  mid of str
           std::string::iterator it = subStr.begin() ;
           std::string::reverse_iterator rit = subStr.rbegin(); // i don't y but, its not allowing me to inititalize 2 iterator inside the for loop, thats y declared outside
           for(  ; it <= subStr.begin() + mid ; ++it, ++rit)  {   //  used for compare the begin & end  till n/2 

               if( *it == *rit ) palindrom = 1;
               else  {
                   palindrom  = -1 ; break;
               }
               
           }if(palindrom != -1 ) std::cout << subStr << std::endl;
        }
    }

}