#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    for (int i : nums)
    {
        if (i <= target)
            res.push_back(i);
    }
    return res;
}

int main()
{
    vector<int> originalVector = {2, 10, 5, 8, 4, 3, 12, 7};
    int numThreshold = 5;

    vector<int> res = twoSum(originalVector, numThreshold);

    cout << "Original Vector: ";
    for (int num : originalVector)
    {
        cout << num << " ";
    }

    cout << endl
         << "twoSum indexes : ";
    for (int num : res)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
