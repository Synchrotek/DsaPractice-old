// Topic -> Basic Problem
// Language -> C++
// site -> codechef.com
// problemCode -> NFS

#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int T;
    cin >> T;
    float U, V, A, S;
    while (T--)
    {
        cin >> U >> V >> A >> S;
        if (U <= V)
        {
            cout << "Yes" << endl;
            continue;
        }
        U = (U * U) - (2 * A * S);
        (U <= 0) ? U = 0 : U = sqrt(U);
        if (U <= V)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
