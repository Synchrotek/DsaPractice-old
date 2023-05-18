// Topic -> Data Structure (Array)
// Language -> C++
// site -> hackerrank.com
// problemName -> 2D Array - DS 

#include <iostream>
using namespace std;

int main()
{
    int Nrow, Ncolumn;
    Nrow = 4, Ncolumn = 6;
    int i, j;
    int currentSum, resSum;
    int arr[Nrow][Ncolumn];

    for (i = 0; i < Nrow; i++)
        for (j = 0; j < Ncolumn; j++)
            cin >> arr[i][j];

    i = j = 0;
    while (i < Nrow - 2)
    {
        currentSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
        currentSum += arr[i + 1][j + 1];
        currentSum += arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

        ((i == 0) && (j == 0)) ? resSum = currentSum : resSum;
        (currentSum >= resSum) ? resSum = currentSum : resSum;
        (j >= Ncolumn - 3) ? i++, j = 0 : j++;
    }
    cout << resSum << endl;
    return 0;
}
