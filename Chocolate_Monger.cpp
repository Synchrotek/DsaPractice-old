// Topic -> Time Complexity
// Language -> C++
// site -> codechef.com
// problemCode -> CM164364
 
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;
        int arr[N], dplCnt = 0;

        for (int i = 0; i < N; i++)
            cin >> arr[i];

        sort(arr, arr + N);

        for (int i = 0; i < N; i++)
        {
            if (arr[i] != arr[i + 1])
                dplCnt++;
        }
        X = N - X;
        if (dplCnt < X)
            cout << dplCnt << endl;
        else
            cout << X << endl;
    }

    return 0;
}
