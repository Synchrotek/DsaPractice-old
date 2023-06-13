// Topic -> Basic Problems
// Language -> C++
// site -> codechef.com
// problemCode -> WEIGHTBL

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int w1, w2, x1, x2, m;
    while (T--)
    {
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        x1 *= m, x2 *= m, w2 -= w1;
        if (x1 <= w2 && x2 >= w2)
            cout << 1 << endl;
        else
            cout << 0 << endl; 
    }
    return 0;
}
