// Topic -> Array
// Language -> c++
// site -> codechef.com
// Problem Code: DOMINANT2

#include <iostream>
using namespace std; 

int main() 
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int arr[N];
        int k, i, j, freq, maxFrq = 0;
        bool mrMaxFrqFnd = false;
        for (k = 0; k < N; k++)
            cin >> arr[k];
        for (k = 0; k < N; k++)
        {
            i = k + 1, j = N - 1, freq = 1;
            if (arr[k] == -1)
                continue;
            while (i <= j)
            {
                if (arr[k] == arr[i])
                {
                    freq++;
                    arr[i] = -1;
                }
                if (arr[k] == arr[j])
                {
                    freq++;
                    arr[j] = -1;
                }
                i++, j--;
            }
            if (freq >= maxFrq)
            {
                if (maxFrq == freq)
                    mrMaxFrqFnd = true;
                else
                {
                    maxFrq = freq;
                    mrMaxFrqFnd = false;
                }
            }
        }
        (mrMaxFrqFnd) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}
