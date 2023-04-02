// Topic -> Array
// Language -> C++
// problemName -> Sort an array of 0s, 1s and 2s
// link -> https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    
public:    
    void sort012(int *arr, int arrSize)
    {
        int i = 0, j = arrSize - 1, howMny012[3] = {0};
        while (i <= j)
        {
            if (arr[i] == 0)
                howMny012[0]++;
            else if (arr[i] == 1)
                howMny012[1]++;
            else if (arr[i] == 2)
                howMny012[2]++;

            if (i == j)
                break;

            if (arr[j] == 0)
                howMny012[0]++;
            else if (arr[j] == 1)
                howMny012[1]++;
            else if (arr[j] == 2)
                howMny012[2]++;
            i++, j--;
        }

        for (i = 0, j = 0; i < arrSize; i++, howMny012[j]--)
        {
            (howMny012[j] <= 0) ? j++ : j;
            arr[i] = j;
        }
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
