// Topic -> Array
// Language -> c++
// site -> codechef.com
// problem code -> FREQARRRET 34

#include <iostream>
using namespace std; 

int main()
{
    int T, N, remN; 
    cin >> T;
    while (T--)
    {
        int i, count, asgnVal = 0;
        cin >> N;
        if (N <= 0)
        {
            cout << -1 << endl;
            continue;
        }
        remN = N;
        int arr[N], resArr[N] = {0};
        for (i = 0; i < N; i++)
            cin >> arr[i];
        for (i = 0; (i < N) && (arr[i] <= remN); i++)
        {
            count = 1;
            if (arr[i] == -1)
                continue;
            resArr[i] = ++asgnVal; 
            for (int j = i + 1; (j < N) && (count < arr[i]); j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                    resArr[j] = asgnVal;
                }
            }
            (count == arr[i]) ? remN -= arr[i] : remN;
        }
        
        if (remN == 0)
            for (i = 0; i < N; i++)
                cout << resArr[i] << " ";
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}
