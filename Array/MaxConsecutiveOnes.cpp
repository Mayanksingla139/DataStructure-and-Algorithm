// {1,0,1,1,1,0} => output = 3

#include <iostream>
#include <vector>
using namespace std;
int MaxConsecutiveOnes(vector<int> &nums)
{
    int maximum = 0;
    int ones = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums.at(i) == 1)
        {
            ones += 1;
            maximum = max(ones, maximum);
        }
        else
        {
            ones = 0;
        }
    }
    return maximum;
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
    cout << "Maximum Consecutive Ones: " << MaxConsecutiveOnes(v);
}