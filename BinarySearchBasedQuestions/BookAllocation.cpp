#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int m, int mid)
{
    int count = 1;
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            count++;
            if (count > m || arr[i] > mid)
            {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

int Allocat(vector<int> &arr, int m)
{
    int n = arr.size();
    int sum = 0;
    int s = 1;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v = {30, 40, 60, 80};
    int m = 2;
    cout << Allocat(v, m);
}