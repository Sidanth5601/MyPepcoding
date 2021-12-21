#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int st = 1;
    int sp = n / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sp; j++)
        {
            std::cout << "\t";
        }

        for (int j = 0; j < st; ++j)
        {
            if (((i > 1 && i < n / 2) || (i > n / 2 && i < st)) && ((j > 1 && j < n /2) || (j > n / 2 && j < st)))
                std::cout << "|\t";
            else
                std::cout << "*\t";
        }

        if (i < n / 2)
        { // till mid
            sp--;
            st += 2;
        }
        else
        { // after mid line
            sp++;
            st -= 2;
        }

        std::cout << "\n";
    }
}