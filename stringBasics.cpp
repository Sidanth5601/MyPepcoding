#include <iostream>
#include <string>

int main() {

     std::string name = (std::string)"Evil" + "Corporation" ; // cannot alter const char so, first one of them to std::string them concat 

     int n ;
     n = name.find("tion");
     std::cout <<" starting position index of \"tion\" (-1 = no match) " <<  n << std::endl;

     bool contains = name.find("tion") != std::string::npos ; // returns in terms of true/1( match found ) or false/0 ( No Match )  
     std::cout << name << std::endl;
     std::cout << contains << std::endl;
    
    std::string str ("Never Miss Twice") ;

// iterator ..........................................................................
    for ( std::string::iterator it = str.begin(); it != str.end() ; ++it) {
     std::cout << *it ;
    } std::cout << std::endl;
    for(std::string::iterator it = str.end() ; it != str.begin() ; --it) { 
        std::cout << *it ; //  does not include last character for condition !=  [ first, last )
    }  std::cout << std::endl;
// reverse_iterator ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
    for(std::string::reverse_iterator rit = str.rbegin() ; rit != str.rend(); ++rit) {
        std::cout << *rit ;
    }std::cout<< std::endl;
    for(std::string::reverse_iterator rit = str.rend() ; rit != str.rbegin(); --rit) {// when it is used for converse of what it says, i.e to print from start
        std::cout << *rit ; // does not include last character for condition !=  [ first, last )
    } std::cout<< std::endl; 
// const_iterator ...........................................................................
    for(std::string::const_iterator cit = str.cbegin() ; cit != str.cend() ; ++cit) {
        std::cout << *cit;
       }   std::cout << std::endl;
    for(std::string::const_iterator cit = str.cend() ; cit >= str.cbegin() ; --cit) {  // when it is used for reverse string printing  
        std::cout << *cit;// to make it include the last character use >= in condition [first, last]
       }   std::cout << std::endl;
// const reverse_iterator..........................
    for(std::string::const_reverse_iterator rit =  str.crbegin() ; rit != str.crend() ; rit++) {
       std::cout << *rit << std::endl;
       
    } std::cout << std::endl;


// copy member function in string template class

    char buffer[20] ; // C sytle string
    std::size_t length = str.copy(buffer, 6, 11); // works only with C style string inside parameter
    buffer[length] = '\0'; // automatically std::string::copy() does not add null terminator which we add manually in C string
    std::cout << buffer << std::endl;

    std::string str2 = "The ability to respond is limitless"; 
    const char* cstr = str2.c_str() ; // convert std::string to C style string
    std::cout << cstr << std::endl;

 // to_string()  to add a integer to a string
    std::string str3 = "yoga fundamentally aims to enhance our experience beyond the  five senses" ;
    int num = 007;
    str3 += std::to_string(num);
    std::cout << str3 << std::endl;

// std::string::resize( size_t)
// std::string::resize( size_t, char c)

    std::string str4 = "Surya namaskara is used for syncing the physically bodies cycle with solar cycle which is about 12_1/4 years ";
    str4.resize(30);
    std::cout << "str4: " << str4 << "\n new size is now after str4.size(30) : " << str4.size() << std::endl;
    str4.resize(60,'+');
    std::cout << "str4: " << str4 << " \n new size is now after str4.size(60, \"_\") : " << str4.size() << std::endl;



    
}


// how to add int to a std::string 
//   using std::to_string(int)

// CONCLUSION :  
// 1. using normal iterator for printing from begin() to end() & condition in for loop it != str.end()
// 2. use reverse_ iterator for printing from rbegin() to rend()  & condition in for loop it != str.rend() 
// 3. const_iterator and const_reverse_iterator used for when we traverse a const string element, promising iterator will not alter the content of char string
// 4. error: expected initializer before '&' token std::ostream&
//    solution :  define the overloaded operator<< inside the class itself (inline) and make it "friend" function
// 5. Also always use double instead of int for larger data range
//    long long -- for very large data range








// TOPICS DISCUSSED BELOW:
// MEMORY, NEW ,INTERNING, IMMUTABILITY , PERFORMANCE , == & strcmp


// # Memory :

// There are 2 parts to the program's memory
// 1. Compiler time M/M, also known as program memory (FLASH M/M)
// 2. Run time M/M (code loaded in RAM)
// when ever we write a -->  String literal "Blockchain"
// then the Blockchain is stored in program M/m (compile time m/m or flash m/m) in READ_ONLY[] part
// (i.e)  why we also should write const char* str = "Blockchain";
// But why, becoz of string Interning or string Pooling( optimization for saving space for duplicate string )

// # Interning : 
//  link : https://cpp4arduino.com/2018/10/23/what-is-string-interning.html


// In C++, compiler performs string interning, but can only happen at compile time,
// that means if only when "string literal are used " and with c-style string, with <const char*>


// whereas char str[] = "Blockchain";
// it will create copy of the read_only string Literal "Blockchain" in a Read/Write memory (RAM or HEAP) then give to char[]
// Also std::string str = "Blockchain";
// its constructor creates  a copy and then stored inside std::string str
 
// #Immutability : means Reference can be change but  cannot change content/instance its curently pointing due to interning 
// if we change one variables content,  whoever is interned to that string literal will also get changed

// immutable string are Only where string interning is applied 
// means with < const char* str > 
// with " string literal "

// == & strcmp(const char* , "string literal to be compared with")
// ==  only checks whether the address is same of not for both 
// comst char* and "string literal"
// visit the link for Example

// strcmp - compares character by character the returns 0 if match
        // returns +1 or -1 depending on the lexicographical order
