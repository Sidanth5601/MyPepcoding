#include <iostream> 
#include <string>

int main() {

   // std::string str = "Hatha yoga is not a exercise, instead it is about understanding the mechanism of the body, creating a atomosphere and using physical posture to channelize the energy to certain direction ";
   // std::string substr = str.substr(0, 28);
   std::string string ;
   std::cin >> string ;
   
   std::string ss;
   for(int i = 0 ; i < string.length(); i++) {
       for(int j = 1 ; j <= string.length() - i ;j++) {
           ss = string.substr(i, j) ;
           std::cout << ss << std::endl;
       }
   }

    std::cin.get();
}
/*
logic behind subString of a std::string
Input : abcde
output :

substr(pos, len)
i, j
0, 1     a
0, 2     ab
0, 3     abc
0, 4     abcd
0, 5     abcde

1, 1     b 
1, 2     bc
1, 3     bcd
1, 4     bcde
2, 1     c
2, 2     cd
2, 3     cde

3, 1     d
3, 2     de

4, 1     e

so, by observering the i, j value
 i -> 0 to l-1 
 j -> 1 to l - i

 */