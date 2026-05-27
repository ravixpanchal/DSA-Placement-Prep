#include <bits/stdc++.h>
using namespace std;

int kadanesAlgo(vector<int> &arr)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        currSum += arr[i];

        maxSum = max(maxSum, currSum);

        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};

    cout << "Max subArray sum is: " << kadanesAlgo(arr);

    return 0;
}