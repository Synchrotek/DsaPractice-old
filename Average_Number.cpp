// Language -> C++
// site -> codechef.com
// problemCode -> AVG2

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, V, sum = 0, diff;
        cin >> N >> K >> V;
        for (int i = 0; i < N; i++)
            cin >> diff, sum += diff;

        diff = V * (N + K) - sum;

        if ((diff > 0) && (diff % K == 0))
            cout << diff / K << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
