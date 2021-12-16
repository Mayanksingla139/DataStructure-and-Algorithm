/*
Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234

Input: num = [9,9,9,9,9,9,9,9,9,9], k = 1
Output: [1,0,0,0,0,0,0,0,0,0,0]
Explanation: 9999999999 + 1 = 10000000000

Input: num = [], k = 0
Output: Null

Input: num = [0], k = 0
Output: [0]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> addToArray(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = n - 1;
    vector<int> arr;
    while (i >= 0 || k > 0)
    {
        if (i >= 0)
        {
            arr.push_back((nums[i] + k) % 10);
            k = (nums[i] + k) / 10;
        }
        else
        {
            arr.push_back(k % 10);
            k = k / 10;
        }
        i--;
    }
    return arr;
}

int main()
{
    int n, value, k;
    vector<int> a;
    cout << "Enter the size:";
    cin >> n;
    cout << "Enter the value:";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        a.push_back(value);
    }
    cout << "Enter the value of K:";
    cin >> k;
    if (addToArray(a, k).size() == 0)
    {
        cout << "Null";
    }
    for (int i = addToArray(a, k).size() - 1; i >= 0; i--)
    {
        cout << (addToArray(a, k)[i]) << " ";
    }
}