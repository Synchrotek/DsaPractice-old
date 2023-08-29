#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    ll N;
    cin >> N;
    ll arr[N], max, mul;
    for (ll i = 0; i < N; i++)
        cin >> arr[i];

    ll arrSize = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + arrSize);

    max = arr[0] * N;

    for (ll i = 1; i < N; i++)
    {
        mul = arr[i] * (N - i);
        (mul > max) ? max = mul : max;
    }

    cout << max << endl;

    return 0;
}
