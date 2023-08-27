// Topic -> Basic Problem
// Language -> C++
// site -> codechef.com
// problemCode -> TANDJ1

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, d, K, res = 0;
        cin >> a >> b >> c >> d >> K;

        (c > a) ? res += (c - a) : res += (a - c);
        (d > b) ? res += (d - b) : res += (b - d);

        if (res <= K)
        {
            res -= K;
            if (res % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
