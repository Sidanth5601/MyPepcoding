/**
 *
 * input: 5
 * output : 
 * 1       2       3       4       5
 * 11      12      13      14      15
 * 21      22      23      24      25
 * 16      17      18      19      20
 * 6       7       8       9       10
 * 
 * input : 6
 * output :
 * 1       2       3       4       5       6
 * 13      14      15      16      17      18
 * 25      26      27      28      29      30
 * 31      32      33      34      35      36
 * 19      20      21      22      23      24
 * 7       8       9       10      11      12 
 * 
 * 
 */
#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    int k1 = 0;
    int k2 = 0;
    std::vector<int> second_half;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (n % 2 == 0) // n is even
            {
                if (i < n / 2)
                    std::cout << ++k1 << "\t";
                else
                    std::cout << ++k2 << "\t";
            }
            else
            {                      // n is odd
                if (i < n / 2 + 1) // one extra line of k1 in odd
                    std::cout << ++k1 << "\t";
                else
                    std::cout << ++k2 << "\t";
            }
        }
        // create array for lower half pattern (for k2 values)
            if (i <= n/2 - 1) {
                second_half.push_back(k1);
              // std::cout << "vector v["  << "] : " << k1 << std::endl; 
            }
        
        // get k2 for lower half pattern
        if (n % 2 == 0)
        {
            if (i >= n / 2 - 1)
            {
                k2 = second_half.back();
                second_half.pop_back();
            }
        }
        else
        {
            if (i >= n / 2)
            {
                k2 = second_half.back();
                second_half.pop_back();
            }
        }

        // k1 change for upper half pattern till n/2
        k1 += n;

        std::cout << std::endl;
    }
}

