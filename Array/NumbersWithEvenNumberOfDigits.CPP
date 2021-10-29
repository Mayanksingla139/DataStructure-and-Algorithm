/*
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation:
12 contains 2 digits (even number of digits).
345 contains 3 digits (odd number of digits).
2 contains 1 digit (odd number of digits).
6 contains 1 digit (odd number of digits).
7896 contains 4 digits (even number of digits).
Therefore only 12 and 7896 contain an even number of digits.
*/

#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        string s = to_string(nums.at(i));
        int len = s.length();
        if (len % 2 == 0)
        {
            count++;
        }
    }
    return count;
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
    cout << "Number with Even Number of Digits:" << findNumbers(v);
}