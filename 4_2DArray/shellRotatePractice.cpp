/**
 * @file main.cpp
 * @brief Ring Rotate ( shell rotation ) 
 * @author Sidanth
 * 
 */

// used returning multiple value's from a funtion
namespace myStuff {
struct onedArray {
    int* a1d;
    int a1dSize;
    onedArray(int* arr, int n) : a1d(arr), a1dSize(n) {}
};
}

#include <iostream>

void logA2d(int **arr, int row, int col);
void rotateShell(int **arr, int n, int m, int s, int r);
myStuff::onedArray fillOnedFromShell(int **arr, int row, int col, int s);
void rotate(int *arr, int n, int r);
void reverse(int *arr, int arrSize, int start, int end);
void fillShellFromOned(int *oned, int onedSize, int **arr, int n, int m, int s);





void logA2d(int **arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
        std::cout << std::endl;
    }
}

void rotateShell(int **arr, int n, int m, int s, int r)
{
    myStuff::onedArray oned = fillOnedFromShell(arr, n, m, s);
    rotate(oned.a1d, oned.a1dSize , r);
    fillShellFromOned(oned.a1d, oned.a1dSize, arr, n, m, s);
}

myStuff::onedArray fillOnedFromShell(int **arr, int row, int col, int s)
{
    int minr = s - 1;
    int minc = s - 1;
    int maxr = row - s;
    int maxc = col - s;
    int onedSize = 2 * (maxr - minr + maxc - minc); // onedsize = lw + bw + rw + tw - 4 =====> 2lw + 2bw - 4 
     // -------> lw = maxr - minr + 1 && rw = maxc - minc + 1  //  {ub - lb + 1} 
     // eg: 1 to 5 we have 5 elements but 5 -1 is 4 so, add 1 to have correct count

    int *oned = new int[onedSize]; // one extra element for storing onedSize 

    int idx = 0;
    // lw
    for (int i = minr, j = minc; i <= maxr; i++)
    {
        oned[idx++] = arr[i][j];
    }

    // bw
    for (int i = maxr, j = minc + 1; j <= maxc; j++)
    {
        oned[idx++] = arr[i][j];
    }

    // rw
    for (int i = maxr - 1, j = maxc; i >= minr; i--)
    {
        oned[idx++] = arr[i][j];
    }

    // tw
    for (int i = minr, j = maxc - 1; j <= minc + 1; j--)
    { // corner missed using +1 & -1
        oned[idx++] = arr[i][j];
    }
    
    myStuff::onedArray a = { oned, onedSize }; // to return multiple value struct is used
    // myStuff::onedArray a1(oned, onedSize);

    return a;
}

void rotate(int* arr, int n, int r)
{ // n -> oned array size
    r = r % n;
    if (r < 0)
        r = r + n;

    reverse(arr, n, 0, n - r - 1); // front part of arr
    reverse(arr, n, n - r, n - 1); // last part of arr
    reverse(arr, n, 0, n - 1);     // entire arr reversed
}

void reverse(int *arr, int arrSize, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void fillShellFromOned(int *oned, int onedSize, int **arr, int n, int m, int s)
{
    int minr = s - 1;
    int minc = s - 1;
    int maxr = n - s; // row - s
    int maxc = m - s; // col - s 

    int idx = 0;
    // lw
    for (int i = minr, j = minc; i <= maxr; i++)
    {
        arr[i][j] = oned[idx++];
    }

    // bw
    for (int i = maxr, j = minc + 1; j <= maxc; j++)
    {
        arr[i][j] = oned[idx++];
    }

    // rw
    for (int i = maxr - 1, j = maxc; i >= minr; i--)
    {
        arr[i][j] = oned[idx++];
    }

    // tw
    for (int i = minr, j = maxc - 1; j <= minc + 1; j--)
    { // corner missed using +1 & -1
        arr[i][j] = oned[idx++];
    }

}

int main()
{
    int n, m;
    std::cin >> n >> m;
    int **arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int s, r; // shell , rotate
    std::cin >> s >> r;

    rotateShell(arr, n, m, s, r);
    logA2d(arr, n, m);
}
