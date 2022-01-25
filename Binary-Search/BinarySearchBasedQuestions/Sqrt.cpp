#include <iostream>
using namespace std;

int Sqrt_Using_linear(int n) // using linear search
{
    int ans=0;
    if(n==0 || n==1){
        return n;
    }
    for (int i = 0; i < n; i++)
    {
        if (i * i == n)
        {
            return i;
            break;
            
        }
        else if (i * i < n)
        {
            ans = i;
        }
    }
    return ans;
}

long long int Sqrt_Using_binary(int n) // using binary search
{
    long long int ans = -1;
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value:";
    cin >> n;
    cout << Sqrt_Using_linear(n) << endl;
    cout << Sqrt_Using_binary(n);
}