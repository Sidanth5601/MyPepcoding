#include<iostream>

int power(int x,int n){          // power(x , n) expectation        
   if(n == 0) return 1;
   return (x * power(x, n-1));   // x * power(x, n -1)--> (faith * x)

}

int main(){
    int x,n; 
    std::cin>>x >>n;
    std::cout<<power(x,n);
}