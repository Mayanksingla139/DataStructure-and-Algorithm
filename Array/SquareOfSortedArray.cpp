/*
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> SquareSortedArray(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i] * nums[i];
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main()
{
    int n, nums;
    cout << "size:";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> nums;
        v.push_back(nums);
    }
    SquareSortedArray(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }
}
