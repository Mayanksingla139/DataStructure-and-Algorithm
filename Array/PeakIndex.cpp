#include <iostream>
#include <vector>
using namespace std;

int PeakIndex(vector<int> &arr)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    vector<int> a = {0, 1, 3, 2, 1};
    cout << PeakIndex(a);
}