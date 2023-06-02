// Topic -> Data Structure (Array)
// Language -> C++
// site -> hackerrank.com
// problemName -> Dynamic Array

#include <iostream>
using namespace std;

void appendValue(int *&arr, int size, int value) 
{
    int *newArray = new int[size + 1];
    for (int i = 0; i < size; i++)
        newArray[i] = arr[i];
    newArray[size] = value;
    delete[] arr;
    arr = newArray;
    newArray = nullptr;
}

int main()
{
    int N, Q;
    cin >> N >> Q;
    int queries[3], arrSizes[N] = {0};
    int index1, index2, i, lastAnswer = 0;
    int **arr = new int *[N];
    for (i = 0; i < N; i++)
        arr[i] = new int[0];

    for (i = 0; i < Q; i++)
    {
        cin >> queries[0] >> queries[1] >> queries[2];
        if (queries[0] == 1)
        {
            index1 = (queries[1] ^ lastAnswer) % N;
            appendValue(arr[index1], arrSizes[index1], queries[2]);
            arrSizes[index1]++;
        }
        else if (queries[0] == 2)
        {
            index1 = (queries[1] ^ lastAnswer) % N;
            index2 = queries[2] % arrSizes[index1];
            lastAnswer = arr[index1][index2];
            cout << lastAnswer << endl;
        }
    }

    for (int i = 0; i < N; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}
