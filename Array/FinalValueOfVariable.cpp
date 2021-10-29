/*
Input: operations = ["--X","X++","X++"]
Output: 1
Explanation: The operations are performed as follows:
Initially, X = 0.
--X: X is decremented by 1, X =  0 - 1 = -1.
X++: X is incremented by 1, X = -1 + 1 =  0.
X++: X is incremented by 1, X =  0 + 1 =  1.
*/

#include <iostream>
#include <vector>
using namespace std;

int FinalValue(vector<string> &nums)
{
    int x = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == "X++" || nums[i] == "++X" || nums[i] == "x++" || nums[i] == "++x")
        {
            x += 1;
        }
        else
        {
            x -= 1;
        }
    }
    return x;
}

int main()
{
    int n;
    string nums;
    cout << "size:";
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> nums;
        v.push_back(nums);
    }
    cout << "Final Value:" << FinalValue(v);
}