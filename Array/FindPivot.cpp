#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> &nums)
{
    int Sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        Sum += nums[i];
    }
    int left_Sum = 0;
    int right_Sum = Sum;
    for (int i = 0; i < nums.size(); i++)
    {
        right_Sum = right_Sum - nums[i];
        if (left_Sum == right_Sum)
        {
            return i;
        }
        left_Sum = left_Sum + nums[i];
    }
    return -1;
}

int main()
{
    vector<int> v = {1, 7, 3, 6, 5, 6};
    cout << findPivot(v);
}