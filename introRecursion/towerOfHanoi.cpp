/**
 * @file towerOfHanoi.cpp
 * @brief solve the TOH, moving disk from source to target using a spare tower 
 *           source = Tower-1
 *           target/destination = Tower-2
 *           spare/helper =  Tower-3
 *  
 * @author Sidanth   
 */

#include <vector>
#include <iostream>

void solve_toh(int n, int t1, int t2, int t3 ) {
    if(n == 0) { return; } // 0 disks NO instruction printed (Base case: smallest problem that can be give)

    solve_toh(n - 1, t1, t3, t2);  // will print the instruction to move n -1 disks from t1 to t3 using t2 (*rules followed*)
    std::cout << n << "[" << t1 << " -> " << t2 << "]" << std::endl;
    solve_toh(n - 1, t3, t2, t1);  // using faith, will print the instruction to move n-1 disks from t3 to t2 using t1 (*)

}

int main() {

    int noOfDisks;
    std::cin >> noOfDisks;
    int t1id, t2id, t3id;
    std::cin >> t1id >> t2id >> t3id;
    solve_toh(noOfDisks, t1id, t2id, t3id);

}
