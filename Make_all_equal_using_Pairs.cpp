#include <iostream>
#include <map>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int i, res = 0, arr[N];
        map<int, int> numFreq;

        for (i = 0; i < N; i++)
            cin >> arr[i], numFreq[arr[i]] = 0;

        for (i = 0; i < N; i++)
            numFreq[arr[i]]++;

        map<int, int>::iterator itr;
        for (itr = numFreq.begin(); itr != numFreq.end(); itr++)
            ((*itr).second > res) ? res = (*itr).second : res;

        cout << (N - res) << endl;
    }

    return 0;
}
