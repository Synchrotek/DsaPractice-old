// Topic -> Bitwise-or
// Language -> C++
// site -> codechef.com
// problemCode -> APPENDOR

#include <iostream>
using namespace std;
 
int main()
{
    int T, N, Y;
    cin >> T;
    while (T--)
    {
        cin >> N >> Y;
        int arr[N], bitSum = 0;
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        for (int i = 0; i < N; i++)
            bitSum = (bitSum | arr[i]);

        if ((bitSum & Y) == bitSum)
            bitSum = (bitSum ^ Y);
        else
            bitSum = -1;

        cout << bitSum << endl;
    }

    return 0;
}
