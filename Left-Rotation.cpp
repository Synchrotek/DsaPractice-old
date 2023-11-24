// Topic -> Data Structure (Array)
// Language -> C++
// site -> hackerrank.com

#include <iostream>
using namespace std;
 
int main() 
{ 
    int N, d;
    cin >> N >> d ;
    (d >= N) ? d = d % N : d;
    int arr[N], tempArr[d], i;
    for (i = 0; i < N; i++)
        cin >> arr[i];

    for (i = 0; i < d; i++)
        tempArr[i] = arr[i];
    for (i = 0; i < N - d; i++)
        arr[i] = arr[i + d];
    for (i = N - d; i < N; i++)
        arr[i] = tempArr[i - N + d];

    for (i = 0; i < N; i++)
        cout << arr[i] << " ";
    
    return 0;
}
